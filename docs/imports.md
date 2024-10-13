# <a id="imports"></a>World imports

wasmvision is a WebAssembly guest module interface for host functions provided by the wasmVision runtime.

 - Imports:
    - interface `wasmvision:platform/time`
    - interface `wasmvision:platform/logging`
    - interface `wasmvision:platform/config`
    - interface `wasmvision:platform/http`

## <a id="wasmvision_platform_time"></a>Import interface wasmvision:platform/time


----

### Functions

#### <a id="now"></a>`now: func`

Get the current time in milliseconds since the Unix epoch.

##### Return values

- <a id="now.0"></a> `u64`

## <a id="wasmvision_platform_logging"></a>Import interface wasmvision:platform/logging


----

### Functions

#### <a id="log"></a>`log: func`

Log a message on the host.

##### Params

- <a id="log.msg"></a>`msg`: `string`

#### <a id="println"></a>`println: func`

Print a message on the host.

##### Params

- <a id="println.msg"></a>`msg`: `string`

## <a id="wasmvision_platform_config"></a>Import interface wasmvision:platform/config


----

### Types

#### <a id="config_error"></a>`enum config-error`


##### Enum Cases

- <a id="config_error.success"></a>`success`
  <p>success, all is well.

- <a id="config_error.no_such_key"></a>`no-such-key`
  <p>The requested key does not exist in the configuration.

----

### Functions

#### <a id="get_config"></a>`get-config: func`


##### Params

- <a id="get_config.key"></a>`key`: `string`

##### Return values

- <a id="get_config.0"></a> result<`string`, [`config-error`](#config_error)>

## <a id="wasmvision_platform_http"></a>Import interface wasmvision:platform/http


----

### Types

#### <a id="http_error"></a>`enum http-error`

HTTP errors returned by the runtime.

##### Enum Cases

- <a id="http_error.success"></a>`success`
- <a id="http_error.destination_not_allowed"></a>`destination-not-allowed`
- <a id="http_error.invalid_url"></a>`invalid-url`
- <a id="http_error.request_error"></a>`request-error`
- <a id="http_error.runtime_error"></a>`runtime-error`
- <a id="http_error.too_many_requests"></a>`too-many-requests`
----

### Functions

#### <a id="get"></a>`get: func`

Get the content at the specified URL.
Returns either the content or an error.

##### Params

- <a id="get.url"></a>`url`: `string`

##### Return values

- <a id="get.0"></a> result<list<`u8`>, [`http-error`](#http_error)>

#### <a id="post"></a>`post: func`

Post the content to the specified URL.
Returns either the response content or an error.

##### Params

- <a id="post.url"></a>`url`: `string`
- <a id="post.content_type"></a>`content-type`: `string`
- <a id="post.body"></a>`body`: list<`u8`>

##### Return values

- <a id="post.0"></a> result<list<`u8`>, [`http-error`](#http_error)>

