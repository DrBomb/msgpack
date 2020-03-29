#include "mgos.h"
#include "mgos_msgpack.h"

int msgpack_mbuf_write(void* data, const char* buf, size_t len){
    return mbuf_append((struct mbuf *)data, buf, len);
}

bool mgos_msgpack_init(){
    return true;
}