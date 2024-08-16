#include"header.h"
#include<stdlib.h>
void init(Stack &ptr)
{
    ptr->top = NULL;
    ptr->size = 0;
}

void push(stackentry e,Stack* ptr)
{
    struct stack *p = ptr->top;
    ptr->top = (struct stack) malloc(sizeof(struct stack));
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
