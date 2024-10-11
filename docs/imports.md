# <a id="imports"></a>World imports

wasmvision is a WebAssembly guest module interface for host functions provided by the wasmVision runtime.

 - Imports:
    - interface `wasmvision:platform/logging`
    - interface `wasmvision:platform/config`
    - interface `wasmvision:platform/key-value`
    - interface `wasmvision:platform/http`

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

- <a id="config_error.no_such_key"></a>`no-such-key`
  <p>The requested key does not exist in the configuration.

----

### Functions

#### <a id="get_config"></a>`get-config: func`


##### Params

- <a id="get_config.key"></a>`key`: `string`

##### Return values

- <a id="get_config.0"></a> result<`string`, [`config-error`](#config_error)>

## <a id="wasmvision_platform_key_value"></a>Import interface wasmvision:platform/key-value


----

### Types

#### <a id="store"></a>`resource store`

An open key-value store
#### <a id="error"></a>`variant error`

The set of errors which may be raised by functions in this interface

##### Variant Cases

- <a id="error.store_table_full"></a>`store-table-full`
  <p>Too many stores have been opened simultaneously. Closing one or more
  stores prior to retrying may address this.

- <a id="error.no_such_store"></a>`no-such-store`
  <p>The host does not recognize the store label requested.

- <a id="error.access_denied"></a>`access-denied`
  <p>The requesting component does not have access to the specified store
  (which may or may not exist).

- <a id="error.other"></a>`other`: `string`
  <p>Some implementation-specific error has occurred (e.g. I/O)

----

### Functions

#### <a id="static_store_open"></a>`[static]store.open: func`

Open the store with the specified label.

`label` must refer to a store allowed in the spin.toml manifest.

`error::no-such-store` will be raised if the `label` is not recognized.

##### Params

- <a id="static_store_open.label"></a>`label`: `string`

##### Return values

- <a id="static_store_open.0"></a> result<own<[`store`](#store)>, [`error`](#error)>

#### <a id="method_store_get"></a>`[method]store.get: func`

Get the value associated with the specified `key`

Returns `ok(none)` if the key does not exist.

##### Params

- <a id="method_store_get.self"></a>`self`: borrow<[`store`](#store)>
- <a id="method_store_get.key"></a>`key`: `string`

##### Return values

- <a id="method_store_get.0"></a> result<option<list<`u8`>>, [`error`](#error)>

#### <a id="method_store_set"></a>`[method]store.set: func`

Set the `value` associated with the specified `key` overwriting any existing value.

##### Params

- <a id="method_store_set.self"></a>`self`: borrow<[`store`](#store)>
- <a id="method_store_set.key"></a>`key`: `string`
- <a id="method_store_set.value"></a>`value`: list<`u8`>

##### Return values

- <a id="method_store_set.0"></a> result<_, [`error`](#error)>

#### <a id="method_store_delete"></a>`[method]store.delete: func`

Delete the tuple with the specified `key`

No error is raised if a tuple did not previously exist for `key`.

##### Params

- <a id="method_store_delete.self"></a>`self`: borrow<[`store`](#store)>
- <a id="method_store_delete.key"></a>`key`: `string`

##### Return values

- <a id="method_store_delete.0"></a> result<_, [`error`](#error)>

#### <a id="method_store_exists"></a>`[method]store.exists: func`

Return whether a tuple exists for the specified `key`

##### Params

- <a id="method_store_exists.self"></a>`self`: borrow<[`store`](#store)>
- <a id="method_store_exists.key"></a>`key`: `string`

##### Return values

- <a id="method_store_exists.0"></a> result<`bool`, [`error`](#error)>

#### <a id="method_store_get_keys"></a>`[method]store.get-keys: func`

Return a list of all the keys

##### Params

- <a id="method_store_get_keys.self"></a>`self`: borrow<[`store`](#store)>

##### Return values

- <a id="method_store_get_keys.0"></a> result<list<`string`>, [`error`](#error)>

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

