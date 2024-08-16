#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define stackentry int
#define MAX_SIZE 10
typedef struct s{
stackentry arr[MAX_SIZE];
int top;
}Stack;

void init(Stack &ptr);
void push(stackentry e,Stack* ptr);
void pop(stackentry *pe , Stack *ptr);
int isempty (Stack *ptr);
int isfull(Stack *ptr);
int stacksize(Stack *ptr);
void clear(Stack*ptr);
#endif // HEADER_H_INCLUDED
