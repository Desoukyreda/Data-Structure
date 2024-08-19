#include"Queue.h"
#include<stdlib.h>


#if LIMITED_MEMORY == 2
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
#elif LIMITED_MEMORY == 1


void init(Queue *ptr)
{
    ptr->front = NULL;
    ptr->rear = NULL;
    ptr->size = 0;
}

void enqueue(queueentry e, Queue *ptr)
{
 struct queue * pn = (struct queue *)malloc(sizeof(struct queue));
  pn->element = e;
  pn->node = NULL;
  if(ptr->front == NULL)
  {
      ptr->front = pn;
  }
  if(ptr->rear != NULL)
  {
  ptr->rear->node = pn;
  }
  ptr->rear = pn;
  ptr->size++;
};

void dequeue(queueentry *pe,Queue*ptr)
{
    struct queue *pn=ptr->front;
    ptr->front = ptr->front->node;
    if(ptr->size==1)ptr->rear = NULL;
    free(pn);
    ptr->size--;
}

int isempty(Queue*ptr)
{
    return !ptr->size;
}
int isfull(Queue*ptr)
{
    return 0;
}
int queuesize(Queue*ptr)
{
    return ptr->size;
}
void clear(Queue*ptr)
{
    while(ptr->front)
    {
        ptr->rear = ptr->rear->node;
        free(ptr->front);
        ptr->front = ptr->rear;

    }
    ptr->size = 0;
}
#endif