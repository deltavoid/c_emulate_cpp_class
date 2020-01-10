#ifndef HELLO_EXT_H
#define HELLO_EXT_H

#include "hello.h"

struct hello_ext_ops;

struct hello_ext
{
    struct hello_ext_ops* ops;
    int num;
    int val;
};

struct hello_ext_ops
{
    struct hello_ops hello_ops_;

    int (*init)(void* self_, int num, int val);
    void (*exit)(void* self_);
    
    void (*set_val)(void* self_, int val);
    int (*get_val)(void* self_);
};

extern struct hello_ext_ops hello_ext_ops_;



#endif