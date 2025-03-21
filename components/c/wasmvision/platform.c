// Generated by `wit-bindgen` 0.38.0. DO NOT EDIT!
#include "platform.h"
#include <stdlib.h>
#include <string.h>

// Imported Functions from `wasmvision:platform/time`

__attribute__((__import_module__("wasmvision:platform/time"), __import_name__("now")))
extern int64_t __wasm_import_wasmvision_platform_time_now(int32_t);

// Imported Functions from `wasmvision:platform/logging`

__attribute__((__import_module__("wasmvision:platform/logging"), __import_name__("log")))
extern void __wasm_import_wasmvision_platform_logging_log(uint8_t *, size_t);

__attribute__((__import_module__("wasmvision:platform/logging"), __import_name__("error")))
extern void __wasm_import_wasmvision_platform_logging_error(uint8_t *, size_t);

__attribute__((__import_module__("wasmvision:platform/logging"), __import_name__("warn")))
extern void __wasm_import_wasmvision_platform_logging_warn(uint8_t *, size_t);

__attribute__((__import_module__("wasmvision:platform/logging"), __import_name__("info")))
extern void __wasm_import_wasmvision_platform_logging_info(uint8_t *, size_t);

__attribute__((__import_module__("wasmvision:platform/logging"), __import_name__("debug")))
extern void __wasm_import_wasmvision_platform_logging_debug(uint8_t *, size_t);

__attribute__((__import_module__("wasmvision:platform/logging"), __import_name__("println")))
extern void __wasm_import_wasmvision_platform_logging_println(uint8_t *, size_t);

// Imported Functions from `wasmvision:platform/config`

__attribute__((__import_module__("wasmvision:platform/config"), __import_name__("get-config")))
extern void __wasm_import_wasmvision_platform_config_get_config(uint8_t *, size_t, uint8_t *);

// Imported Functions from `wasmvision:platform/http`

__attribute__((__import_module__("wasmvision:platform/http"), __import_name__("get")))
extern void __wasm_import_wasmvision_platform_http_get(uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/http"), __import_name__("post")))
extern void __wasm_import_wasmvision_platform_http_post(uint8_t *, size_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/http"), __import_name__("post-image")))
extern void __wasm_import_wasmvision_platform_http_post_image(uint8_t *, size_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *, size_t, int32_t, uint8_t *);

// Imported Functions from `wasmvision:platform/datastore`

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[constructor]frame-store")))
extern int32_t __wasm_import_wasmvision_platform_datastore_constructor_frame_store(int32_t);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]frame-store.get")))
extern void __wasm_import_wasmvision_platform_datastore_method_frame_store_get(int32_t, int32_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]frame-store.set")))
extern void __wasm_import_wasmvision_platform_datastore_method_frame_store_set(int32_t, int32_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]frame-store.delete")))
extern void __wasm_import_wasmvision_platform_datastore_method_frame_store_delete(int32_t, int32_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]frame-store.delete-all")))
extern void __wasm_import_wasmvision_platform_datastore_method_frame_store_delete_all(int32_t, int32_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]frame-store.exists")))
extern void __wasm_import_wasmvision_platform_datastore_method_frame_store_exists(int32_t, int32_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]frame-store.get-keys")))
extern void __wasm_import_wasmvision_platform_datastore_method_frame_store_get_keys(int32_t, int32_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[constructor]processor-store")))
extern int32_t __wasm_import_wasmvision_platform_datastore_constructor_processor_store(int32_t);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]processor-store.get")))
extern void __wasm_import_wasmvision_platform_datastore_method_processor_store_get(int32_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]processor-store.set")))
extern void __wasm_import_wasmvision_platform_datastore_method_processor_store_set(int32_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]processor-store.delete")))
extern void __wasm_import_wasmvision_platform_datastore_method_processor_store_delete(int32_t, uint8_t *, size_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]processor-store.delete-all")))
extern void __wasm_import_wasmvision_platform_datastore_method_processor_store_delete_all(int32_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]processor-store.exists")))
extern void __wasm_import_wasmvision_platform_datastore_method_processor_store_exists(int32_t, uint8_t *, size_t, uint8_t *);

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[method]processor-store.get-keys")))
extern void __wasm_import_wasmvision_platform_datastore_method_processor_store_get_keys(int32_t, uint8_t *, size_t, uint8_t *);

// Canonical ABI intrinsics

__attribute__((__weak__, __export_name__("cabi_realloc")))
void *cabi_realloc(void *ptr, size_t old_size, size_t align, size_t new_size) {
  (void) old_size;
  if (new_size == 0) return (void*) align;
  void *ret = realloc(ptr, new_size);
  if (!ret) abort();
  return ret;
}

// Helper Functions

void wasmvision_platform_config_result_string_config_error_free(wasmvision_platform_config_result_string_config_error_t *ptr) {
  if (!ptr->is_err) {
    platform_string_free(&ptr->val.ok);
  } else {
  }
}

void wasmvision_platform_http_result_string_http_error_free(wasmvision_platform_http_result_string_http_error_t *ptr) {
  if (!ptr->is_err) {
    platform_string_free(&ptr->val.ok);
  } else {
  }
}

void platform_list_u8_free(platform_list_u8_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    uint8_t *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
    }
    free(list_ptr);
  }
}

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[resource-drop]frame-store")))
extern void __wasm_import_wasmvision_platform_datastore_frame_store_drop(int32_t handle);

void wasmvision_platform_datastore_frame_store_drop_own(wasmvision_platform_datastore_own_frame_store_t handle) {
  __wasm_import_wasmvision_platform_datastore_frame_store_drop(handle.__handle);
}

wasmvision_platform_datastore_borrow_frame_store_t wasmvision_platform_datastore_borrow_frame_store(wasmvision_platform_datastore_own_frame_store_t arg) {
  return (wasmvision_platform_datastore_borrow_frame_store_t) { arg.__handle };
}

__attribute__((__import_module__("wasmvision:platform/datastore"), __import_name__("[resource-drop]processor-store")))
extern void __wasm_import_wasmvision_platform_datastore_processor_store_drop(int32_t handle);

void wasmvision_platform_datastore_processor_store_drop_own(wasmvision_platform_datastore_own_processor_store_t handle) {
  __wasm_import_wasmvision_platform_datastore_processor_store_drop(handle.__handle);
}

wasmvision_platform_datastore_borrow_processor_store_t wasmvision_platform_datastore_borrow_processor_store(wasmvision_platform_datastore_own_processor_store_t arg) {
  return (wasmvision_platform_datastore_borrow_processor_store_t) { arg.__handle };
}

void wasmvision_platform_datastore_result_string_datastore_error_free(wasmvision_platform_datastore_result_string_datastore_error_t *ptr) {
  if (!ptr->is_err) {
    platform_string_free(&ptr->val.ok);
  } else {
  }
}

void wasmvision_platform_datastore_result_void_datastore_error_free(wasmvision_platform_datastore_result_void_datastore_error_t *ptr) {
  if (!ptr->is_err) {
  } else {
  }
}

void wasmvision_platform_datastore_result_bool_datastore_error_free(wasmvision_platform_datastore_result_bool_datastore_error_t *ptr) {
  if (!ptr->is_err) {
  } else {
  }
}

void platform_list_string_free(platform_list_string_t *ptr) {
  size_t list_len = ptr->len;
  if (list_len > 0) {
    platform_string_t *list_ptr = ptr->ptr;
    for (size_t i = 0; i < list_len; i++) {
      platform_string_free(&list_ptr[i]);
    }
    free(list_ptr);
  }
}

void platform_string_set(platform_string_t *ret, const char*s) {
  ret->ptr = (uint8_t*) s;
  ret->len = strlen(s);
}

void platform_string_dup(platform_string_t *ret, const char*s) {
  ret->len = strlen(s);
  ret->ptr = (uint8_t*) cabi_realloc(NULL, 0, 1, ret->len * 1);
  memcpy(ret->ptr, s, ret->len * 1);
}

void platform_string_free(platform_string_t *ret) {
  if (ret->len > 0) {
    free(ret->ptr);
  }
  ret->ptr = NULL;
  ret->len = 0;
}

// Component Adapters

uint64_t wasmvision_platform_time_now(uint32_t tz) {
  int64_t ret = __wasm_import_wasmvision_platform_time_now((int32_t) (tz));
  return (uint64_t) (ret);
}

void wasmvision_platform_logging_log(platform_string_t *msg) {
  __wasm_import_wasmvision_platform_logging_log((uint8_t *) (*msg).ptr, (*msg).len);
}

void wasmvision_platform_logging_error(platform_string_t *msg) {
  __wasm_import_wasmvision_platform_logging_error((uint8_t *) (*msg).ptr, (*msg).len);
}

void wasmvision_platform_logging_warn(platform_string_t *msg) {
  __wasm_import_wasmvision_platform_logging_warn((uint8_t *) (*msg).ptr, (*msg).len);
}

void wasmvision_platform_logging_info(platform_string_t *msg) {
  __wasm_import_wasmvision_platform_logging_info((uint8_t *) (*msg).ptr, (*msg).len);
}

void wasmvision_platform_logging_debug(platform_string_t *msg) {
  __wasm_import_wasmvision_platform_logging_debug((uint8_t *) (*msg).ptr, (*msg).len);
}

void wasmvision_platform_logging_println(platform_string_t *msg) {
  __wasm_import_wasmvision_platform_logging_println((uint8_t *) (*msg).ptr, (*msg).len);
}

bool wasmvision_platform_config_get_config(platform_string_t *key, platform_string_t *ret, wasmvision_platform_config_config_error_t *err) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[12];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_config_get_config((uint8_t *) (*key).ptr, (*key).len, ptr);
  wasmvision_platform_config_result_string_config_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (platform_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 4))), (*((size_t*) (ptr + 8))) };
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 4));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_http_get(platform_string_t *url, platform_string_t *ret, wasmvision_platform_http_http_error_t *err) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[12];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_http_get((uint8_t *) (*url).ptr, (*url).len, ptr);
  wasmvision_platform_http_result_string_http_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (platform_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 4))), (*((size_t*) (ptr + 8))) };
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 4));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_http_post(platform_string_t *url, platform_string_t *content_type, platform_list_u8_t *body, platform_string_t *ret, wasmvision_platform_http_http_error_t *err) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[12];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_http_post((uint8_t *) (*url).ptr, (*url).len, (uint8_t *) (*content_type).ptr, (*content_type).len, (uint8_t *) (*body).ptr, (*body).len, ptr);
  wasmvision_platform_http_result_string_http_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (platform_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 4))), (*((size_t*) (ptr + 8))) };
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 4));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_http_post_image(platform_string_t *url, platform_string_t *content_type, platform_list_u8_t *request_template, platform_string_t *response_item, uint32_t mat, platform_string_t *ret, wasmvision_platform_http_http_error_t *err) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[12];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_http_post_image((uint8_t *) (*url).ptr, (*url).len, (uint8_t *) (*content_type).ptr, (*content_type).len, (uint8_t *) (*request_template).ptr, (*request_template).len, (uint8_t *) (*response_item).ptr, (*response_item).len, (int32_t) (mat), ptr);
  wasmvision_platform_http_result_string_http_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (platform_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 4))), (*((size_t*) (ptr + 8))) };
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 4));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

wasmvision_platform_datastore_own_frame_store_t wasmvision_platform_datastore_constructor_frame_store(uint32_t id) {
  int32_t ret = __wasm_import_wasmvision_platform_datastore_constructor_frame_store((int32_t) (id));
  return (wasmvision_platform_datastore_own_frame_store_t) { ret };
}

bool wasmvision_platform_datastore_method_frame_store_get(wasmvision_platform_datastore_borrow_frame_store_t self, uint32_t frame, platform_string_t *key, platform_string_t *ret, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[12];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_frame_store_get((self).__handle, (int32_t) (frame), (uint8_t *) (*key).ptr, (*key).len, ptr);
  wasmvision_platform_datastore_result_string_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (platform_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 4))), (*((size_t*) (ptr + 8))) };
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 4));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_frame_store_set(wasmvision_platform_datastore_borrow_frame_store_t self, uint32_t frame, platform_string_t *key, platform_string_t *value, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_frame_store_set((self).__handle, (int32_t) (frame), (uint8_t *) (*key).ptr, (*key).len, (uint8_t *) (*value).ptr, (*value).len, ptr);
  wasmvision_platform_datastore_result_void_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_frame_store_delete(wasmvision_platform_datastore_borrow_frame_store_t self, uint32_t frame, platform_string_t *key, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_frame_store_delete((self).__handle, (int32_t) (frame), (uint8_t *) (*key).ptr, (*key).len, ptr);
  wasmvision_platform_datastore_result_void_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_frame_store_delete_all(wasmvision_platform_datastore_borrow_frame_store_t self, uint32_t frame, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_frame_store_delete_all((self).__handle, (int32_t) (frame), ptr);
  wasmvision_platform_datastore_result_void_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_frame_store_exists(wasmvision_platform_datastore_borrow_frame_store_t self, uint32_t frame, bool *ret, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_frame_store_exists((self).__handle, (int32_t) (frame), ptr);
  wasmvision_platform_datastore_result_bool_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

void wasmvision_platform_datastore_method_frame_store_get_keys(wasmvision_platform_datastore_borrow_frame_store_t self, uint32_t frame, platform_list_string_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_frame_store_get_keys((self).__handle, (int32_t) (frame), ptr);
  *ret = (platform_list_string_t) { (platform_string_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

wasmvision_platform_datastore_own_processor_store_t wasmvision_platform_datastore_constructor_processor_store(uint32_t id) {
  int32_t ret = __wasm_import_wasmvision_platform_datastore_constructor_processor_store((int32_t) (id));
  return (wasmvision_platform_datastore_own_processor_store_t) { ret };
}

bool wasmvision_platform_datastore_method_processor_store_get(wasmvision_platform_datastore_borrow_processor_store_t self, platform_string_t *processor, platform_string_t *key, platform_string_t *ret, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[12];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_processor_store_get((self).__handle, (uint8_t *) (*processor).ptr, (*processor).len, (uint8_t *) (*key).ptr, (*key).len, ptr);
  wasmvision_platform_datastore_result_string_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (platform_string_t) { (uint8_t*)(*((uint8_t **) (ptr + 4))), (*((size_t*) (ptr + 8))) };
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 4));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_processor_store_set(wasmvision_platform_datastore_borrow_processor_store_t self, platform_string_t *processor, platform_string_t *key, platform_string_t *value, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_processor_store_set((self).__handle, (uint8_t *) (*processor).ptr, (*processor).len, (uint8_t *) (*key).ptr, (*key).len, (uint8_t *) (*value).ptr, (*value).len, ptr);
  wasmvision_platform_datastore_result_void_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_processor_store_delete(wasmvision_platform_datastore_borrow_processor_store_t self, platform_string_t *processor, platform_string_t *key, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_processor_store_delete((self).__handle, (uint8_t *) (*processor).ptr, (*processor).len, (uint8_t *) (*key).ptr, (*key).len, ptr);
  wasmvision_platform_datastore_result_void_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_processor_store_delete_all(wasmvision_platform_datastore_borrow_processor_store_t self, platform_string_t *processor, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_processor_store_delete_all((self).__handle, (uint8_t *) (*processor).ptr, (*processor).len, ptr);
  wasmvision_platform_datastore_result_void_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

bool wasmvision_platform_datastore_method_processor_store_exists(wasmvision_platform_datastore_borrow_processor_store_t self, platform_string_t *processor, bool *ret, wasmvision_platform_datastore_datastore_error_t *err) {
  __attribute__((__aligned__(1)))
  uint8_t ret_area[2];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_processor_store_exists((self).__handle, (uint8_t *) (*processor).ptr, (*processor).len, ptr);
  wasmvision_platform_datastore_result_bool_datastore_error_t result;
  switch ((int32_t) *((uint8_t*) (ptr + 0))) {
    case 0: {
      result.is_err = false;
      result.val.ok = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
    case 1: {
      result.is_err = true;
      result.val.err = (int32_t) *((uint8_t*) (ptr + 1));
      break;
    }
  }
  if (!result.is_err) {
    *ret = result.val.ok;
    return 1;
  } else {
    *err = result.val.err;
    return 0;
  }
}

void wasmvision_platform_datastore_method_processor_store_get_keys(wasmvision_platform_datastore_borrow_processor_store_t self, platform_string_t *processor, platform_list_string_t *ret) {
  __attribute__((__aligned__(4)))
  uint8_t ret_area[8];
  uint8_t *ptr = (uint8_t *) &ret_area;
  __wasm_import_wasmvision_platform_datastore_method_processor_store_get_keys((self).__handle, (uint8_t *) (*processor).ptr, (*processor).len, ptr);
  *ret = (platform_list_string_t) { (platform_string_t*)(*((uint8_t **) (ptr + 0))), (*((size_t*) (ptr + 4))) };
}

// Ensure that the *_component_type.o object is linked in

extern void __component_type_object_force_link_platform(void);
void __component_type_object_force_link_platform_public_use_in_this_compilation_unit(void) {
  __component_type_object_force_link_platform();
}
