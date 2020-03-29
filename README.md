# msgpack library for mOS

## Introduction

MessagePack is a computer data interchange format. It is a binary form for representing simple data structures like arrays and associative arrays. MessagePack aims to be as compact and simple as possible.

For more information please visit the source repo here: [https://github.com/msgpack/msgpack-c](https://github.com/msgpack/msgpack-c)

## Usage

For some reason the `sbuf` implementation of mutable buffers inside msgpack-c makes the ESP32 crash.

When packing, use the provided `msgpack_mbuf_write` callback to write into an `mbuf` instead.
