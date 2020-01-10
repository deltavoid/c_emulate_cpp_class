#include <stdio.h>
#include <stdlib.h>
#include "hello.h"
#include "hello_ext.h"


int main()
{
    int val;
    printf("hello world\n");

    struct hello* hello_ = malloc(sizeof(struct hello));
    hello_ops_.init(hello_, 1);

    val = hello_->ops->get(hello_);
    printf("hello_ value: %d\n", val);

    hello_->ops->set(hello_, 2);
    val = hello_->ops->get(hello_);
    printf("hello_ value: %d\n", val);

    hello_->ops->exit(hello_);
    free(hello_);

    
    struct hello_ext* hello_ext_ = malloc(sizeof(struct hello_ext));
    hello_ext_ops_.init(hello_ext_, 1, 2);

    struct hello* hello1 = (struct hello*)hello_ext_;
    

    


    return 0;
}