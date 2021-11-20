#ifndef STACK_H
#define STACK_H


#include <stdbool.h>

typedef struct stack Stack;

Stack *stack_create(int max_stack_size);
void stack_delete(Stack *S);
bool stack_is_empty(Stack *S);


#endif
