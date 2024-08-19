#include"header.h"

int init(Queue *ptr)
{
    ptr->front = 0;
    ptr->rear = -1;
    ptr->size = 0;
}
void enqueue(queueentry e,Queue* ptr)
{
    ptr->rear = (ptr->rear+1)%MAX_SIZE;
    ptr->element[ptr->rear] = e;
    ptr->size++;
}

void dequeue(queueentry * pe,Queue *ptr)
{
    *pe = ptr->element[ptr->front];
    ptr->front = (ptr->front+1)%MAX_SIZE;
    ptr->size--;
}
int isempty(Queue *ptr)
{
    return !ptr->size;
}

int isfull(Queue *ptr)
{
    return ptr->size == MAX_SIZE;
}
int queuesize(Queue *ptr)
{
    return ptr->size;
}
void clear(Queue *ptr)
{
    ptr->front = 0;
    ptr->rear = -1;
    ptr->size = 0;
}
