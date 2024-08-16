
#include "header.h"

void init(Stack *ptr)
{
    ptr->top = 0;
}

void push(stackentry e,Stack *ptr)
{
    ptr->arr[ptr->top++] = e;
}

void pop(stackentry *pe,Stack *ptr)
{
    *pe = ptr->arr[--ptr->top];
}

int isempty(Stack *ptr)
{
    return !ptr->top;
}

int isfull(Stack* ptr)
{
    return (ptr->top == MAX_SIZE);
}

int stacksize(Stack *ptr)
{
    return ptr->top;
}

void clear(Stack*ptr)
{
    ptr->top = 0;
}
