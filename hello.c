#include "hello.h"


static int hello_init(struct hello* self, int num)
{
    self->ops = &hello_ops_;
    self->num = num;
}

static int hello_set(struct hello* self, int val)
{
    self->num = val;
}

static int hello_get(struct hello* self)
{
    return self->num;
}

static void hello_exit(struct hello* self)
{
    self->num = 0;
}

const struct hello_ops hello_ops_ = {
    .init = hello_init,
    .set = hello_set,
    .get = hello_get,
    .exit = hello_exit
};
