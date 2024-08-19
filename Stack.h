#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include"global.h"

#if LIMITED_MEMORY == 2
#define stackentry int
#define MAX_SIZE 10
typedef struct s{
stackentry arr[MAX_SIZE];
int top;
}Stack;

void init(Stack *ptr);
void push(stackentry e,Stack* ptr);
void pop(stackentry *pe , Stack *ptr);
int isempty (Stack *ptr);
int isfull(Stack *ptr);
int stacksize(Stack *ptr);
void clear(Stack*ptr);

#elif LIMITED_MEMORY == 1

#define stackentry int
struct stack{
stackentry element;
struct stack *node;
};

typedef struct s
{
  struct stack* top;
  int size;
}Stack;
void init(Stack *ptr);
void push(stackentry e,Stack* ptr);
void pop(stackentry *pe , Stack *ptr);
int isempty (Stack *ptr);
int isfull(Stack *ptr);
int stacksize(Stack *ptr);
void clear(Stack*ptr);

#endif
#endif // HEADER_H_INCLUDED
