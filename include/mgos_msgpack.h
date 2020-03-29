#pragma once

#include "common/mbuf.h"

#ifdef __cplusplus
extern "C"{
#endif

//msgpack writer for mbuf
int msgpack_mbuf_write(void* data, const char* buf, size_t len);

#ifdef __cplusplus
}
#endif