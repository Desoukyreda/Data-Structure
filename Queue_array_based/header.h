#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define queueentry int
#define MAX_SIZE    10
typedef struct s{
queueentry element[MAX_SIZE];
int front;
int rear;
int size;
}Queue;
int init(Queue *ptr);
void enqueue(queueentry e,Queue* ptr);
void dequeue(queueentry * pe,Queue *ptr);
int isempty(Queue *ptr);
int isfull(Queue *ptr);
int queuesize(Queue *ptr);
void clear(Queue *ptr);
#endif // HEADER_H_INCLUDED
