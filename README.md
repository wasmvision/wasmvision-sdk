# wasmvision-sdk

The wasmVision platform SDK is for processors to be able to use host features like logging and retrieving configuration settings.

It includes [WIT](https://github.com/WebAssembly/component-model/blob/main/design/mvp/WIT.md) files defining the interface to be used.

These interface definitions are then used to generate WASM bindings for TinyGo, Rust, and C. Those bindings can then be used in a WASM guest module to call wasmVision platform functions.

## Platform features

There are already several capabilities implemented in wasmVision for processors to use.

- Config
- HTTP outgoing requests
- Logging

[Documentation for the wasmVision platform SDK is located here](./docs/imports.md)

### TinyGo

This TinyGo module uses both logging and config.

```go
package main

import (
	"strconv"
	"unsafe"

	"github.com/wasmvision/wasmvision-sdk-go/config"
	"github.com/wasmvision/wasmvision-sdk-go/logging"
	"wasmcv.org/wasm/cv/mat"
)

var configValue string

//export process
func process(image mat.Mat) mat.Mat {
	if configValue == "" {
		conf := config.GetConfig("default")
		if conf.IsErr() {
			configValue = conf.Err().String()
			logging.Log("Config error: " + configValue)
		} else {
			configValue = *conf.OK()
			logging.Log("Config: " + configValue)
		}
	}

	logging.Log("Cols: " +
		strconv.Itoa(int(image.Cols())) +
		" Rows: " +
		strconv.Itoa(int(image.Rows())) +
		" Type: " +
		strconv.Itoa(int(image.Mattype())) +
		" Size: " +
		strconv.Itoa(int(image.Size().Len())))

	return image
}

// malloc is needed for wasm-unknown-unknown target for functions that return a List.
//
//export malloc
func malloc(size uint32) uint32 {
	data := make([]byte, size)
	ptr := uintptr(unsafe.Pointer(unsafe.SliceData(data)))

	return uint32(ptr)
}

func main() {}
```

Install the `wasmvision-sdk-go` package into your Go package:

```shell
go get github.com/wasmvision/wasmvision-sdk-go
```

You can then compile this module using the TinyGo compiler.

```shell
tinygo build -o processor.wasm -target=wasm-unknown processor.go
```

### Rust

This Rust module uses the wasmVision platform SDK logging capability.

```rust
#![no_std]

extern crate core;
extern crate alloc;

use alloc::string::ToString;
use wasmcv::wasm::cv;
use wasmvision::wasmvision::platform::logging;

#[no_mangle]
pub extern fn process(mat: cv::mat::Mat) -> cv::mat::Mat {
    logging::log(&["Performing blur on image with Cols: ", &mat.cols().to_string(), " Rows: ", &mat.rows().to_string()].concat());

    let out = cv::cv::blur(mat, cv::types::Size{x: 25, y: 25});
    return out;
}
```

Install the `wasmvision` crate into your Rust project:

```shell
cargo add wasmvision
```

You can then compile this module using the Rust compiler.

```shell
cargo build --target wasm32-unknown-unknown --release
```

### C Language

This C module uses the wasmVision platform SDK logging capability.

```c
#include <wasmcv/imports.h>
#include <wasmvision/platform.h>

wasm_cv_mat_own_mat_t process(wasm_cv_mat_own_mat_t image) {
    wasm_cv_cv_size_t size = {.x = 25, .y = 25};
    wasm_cv_mat_own_mat_t out_mat = wasm_cv_cv_blur(image, &size);

    platform_string_t msg = {(unsigned char *)"Blurc processor called", 23};
    wasmvision_platform_logging_log(&msg);

    return out_mat;
}
```
