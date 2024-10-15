
generate-go:
	wit-bindgen-go generate --out ./components/tinygo -w imports -p github.com/wasmvision/go-wasmvision-sdk/ ./wit/

generate-rust:
	wit-bindgen rust --out-dir ./components/rust/wasmvision/src -w imports ./wit/

generate-c:
	wit-bindgen c --out-dir ./components/c/wasmvision --rename-world platform ./wit/

generate-docs:
	wit-bindgen markdown --out-dir ./docs -w imports ./wit/

generate: generate-go generate-rust generate-c
