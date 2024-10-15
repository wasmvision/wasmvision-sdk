// Generated by `wit-bindgen` 0.32.0. DO NOT EDIT!
#ifndef __BINDINGS_PLATFORM_H
#define __BINDINGS_PLATFORM_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct platform_string_t {
  uint8_t*ptr;
  size_t len;
} platform_string_t;

typedef uint8_t wasmvision_platform_config_config_error_t;

// success, all is well.
#define WASMVISION_PLATFORM_CONFIG_CONFIG_ERROR_SUCCESS 0
// The requested key does not exist in the configuration.
#define WASMVISION_PLATFORM_CONFIG_CONFIG_ERROR_NO_SUCH_KEY 1

typedef struct {
  bool is_err;
  union {
    platform_string_t ok;
    wasmvision_platform_config_config_error_t err;
  } val;
} wasmvision_platform_config_result_string_config_error_t;

// HTTP errors returned by the runtime.
typedef uint8_t wasmvision_platform_http_http_error_t;

#define WASMVISION_PLATFORM_HTTP_HTTP_ERROR_SUCCESS 0
#define WASMVISION_PLATFORM_HTTP_HTTP_ERROR_DESTINATION_NOT_ALLOWED 1
#define WASMVISION_PLATFORM_HTTP_HTTP_ERROR_INVALID_URL 2
#define WASMVISION_PLATFORM_HTTP_HTTP_ERROR_REQUEST_ERROR 3
#define WASMVISION_PLATFORM_HTTP_HTTP_ERROR_RUNTIME_ERROR 4
#define WASMVISION_PLATFORM_HTTP_HTTP_ERROR_TOO_MANY_REQUESTS 5

typedef struct {
  uint8_t *ptr;
  size_t len;
} platform_list_u8_t;

typedef struct {
  bool is_err;
  union {
    platform_list_u8_t ok;
    wasmvision_platform_http_http_error_t err;
  } val;
} wasmvision_platform_http_result_list_u8_http_error_t;

// Imported Functions from `wasmvision:platform/time`
// Get the current time in milliseconds since the Unix epoch. Use 0 for the `tz` parameter for now.
extern uint64_t wasmvision_platform_time_now(uint32_t tz);

// Imported Functions from `wasmvision:platform/logging`
// Log a message on the host.
extern void wasmvision_platform_logging_log(platform_string_t *msg);
// Print a message on the host.
extern void wasmvision_platform_logging_println(platform_string_t *msg);

// Imported Functions from `wasmvision:platform/config`
extern bool wasmvision_platform_config_get_config(platform_string_t *key, platform_string_t *ret, wasmvision_platform_config_config_error_t *err);

// Imported Functions from `wasmvision:platform/http`
// Get the content at the specified URL.
// Returns either the content or an error.
extern bool wasmvision_platform_http_get(platform_string_t *url, platform_list_u8_t *ret, wasmvision_platform_http_http_error_t *err);
// Post the content to the specified URL.
// Returns either the response content or an error.
extern bool wasmvision_platform_http_post(platform_string_t *url, platform_string_t *content_type, platform_list_u8_t *body, platform_list_u8_t *ret, wasmvision_platform_http_http_error_t *err);
// Post the image to the specified URL.
// Template is the template to use to send the image.
// If the content-type is image/jpeg or image/png, the template is ignored, and the image is simply converted and sent in that format.
// Otherwise, the template is used to convert the image to the desired format using simple substitution of the symbol %IMAGE%
// after base64 encoding the image.
// The response-item is the item in the response to return. Usually this will be a JSON element that will be parsed.
// Mat is the reference to to the Mat to use.
extern bool wasmvision_platform_http_post_image(platform_string_t *url, platform_string_t *content_type, platform_list_u8_t *request_template, platform_string_t *response_item, uint32_t mat, platform_list_u8_t *ret, wasmvision_platform_http_http_error_t *err);

// Helper Functions

void wasmvision_platform_config_result_string_config_error_free(wasmvision_platform_config_result_string_config_error_t *ptr);

void platform_list_u8_free(platform_list_u8_t *ptr);

void wasmvision_platform_http_result_list_u8_http_error_free(wasmvision_platform_http_result_list_u8_http_error_t *ptr);

// Transfers ownership of `s` into the string `ret`
void platform_string_set(platform_string_t *ret, const char*s);

// Creates a copy of the input nul-terminate string `s` and
// stores it into the component model string `ret`.
void platform_string_dup(platform_string_t *ret, const char*s);

// Deallocates the string pointed to by `ret`, deallocating
// the memory behind the string.
void platform_string_free(platform_string_t *ret);

#ifdef __cplusplus
}
#endif
#endif