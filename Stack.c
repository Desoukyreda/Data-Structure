#include "Stack.h"
#include<stdlib.h>

#if LIMITED_MEMORY == 2

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

#elif LIMITED_MEMORY == 1


void init(Stack *ptr)
{
    ptr->top = NULL;
    ptr->size = 0;
}

void push(stackentry e,Stack* ptr)
{
    struct stack *p = ptr->top;
    ptr->top = (struct stack *) malloc(sizeof(struct stack));
    ptr->top->element = e;
    ptr->top->node = p ;
    ptr->size++;
}

void pop(stackentry *pe , Stack *ptr)
{
    struct stack *p = ptr->top;
    *pe = ptr->top->element;
    ptr->top = ptr->top->node;
    free(p);
    ptr->size--;
}

int isempty (Stack *ptr)
{
    return !ptr->top;
}
int isfull(Stack *ptr)
{
    return 0;
}

int stacksize(Stack *ptr)
{
    return ptr->size;
}

void clear(Stack*ptr)
{
    struct stack *pn;
    while(ptr->top)
    {
        pn = ptr->top->node;
        free(ptr->top);
        ptr->top = pn;
    }
    ptr->size = 0;
}

#endif