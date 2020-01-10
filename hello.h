#ifndef HELLO_H
#define HELLO_H

struct hello_ops;

struct hello
{
    const struct hello_ops * ops;
    int num;
};

struct hello_ops
{
    // struct hello* create(int num);
    int (*init)(struct hello* self, int num);
    int (*set)(struct hello* self, int val);
    int (*get)(struct hello* self);
    void (*exit)(struct hello* self);
    // void destroy(struct hello* self);
};

extern const struct hello_ops hello_ops_;

// 不存在多重实现，接口与接口只有包含于被包含的关系，接口与实现只有一层关系。

#endif