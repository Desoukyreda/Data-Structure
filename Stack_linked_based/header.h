#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

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
#endif // HEADER_H_INCLUDED
