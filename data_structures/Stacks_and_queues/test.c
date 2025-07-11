#include <stdio.h>

typedef struct
{
    int items[5];
    int *sp; //structure pointer

}Stack;

#define stack_push(stack, value) (*(stack).sp++ = value)
#define stack_pop(stack) (*(--(stack).sp))
#define stack_init(stack) ((stack).sp = (stack).items)

int main(void)
{
    Stack stack = {0};
    stack_init(stack);
    stack_push(stack, 10);
    stack_push(stack, 7);
    stack_push(stack, 20);
    stack_push(stack, 7947);
    printf("The following are the removed elements from the stack\n\n");
    printf(" \t%d\n", stack_pop(stack));
    printf(" \t%d\n", stack_pop(stack));
    printf(" \t%d\n", stack_pop(stack));
    printf(" \t%d\n", stack_pop(stack));
    return 0;
}