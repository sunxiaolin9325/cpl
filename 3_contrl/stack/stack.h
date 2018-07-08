#ifndef STACK_H__
#define STACK_H__

#define QUEUESIZE 32
#define STACKSIZE 32

typedef struct queue_st {
	int data[QUEUESIZE];
	int front;
	int tail;
} QUEUE;

typedef struct stack_st {
	int data[STACKSIZE];
	int top;
	int button;
} STACK;

QUEUE *queue_create();
int queue_is_empty(QUEUE *q);
int queue_is_full(QUEUE *q);
int queue_en(QUEUE *q, int x);
int queue_out(QUEUE *q, int *x);

STACK *stack_create();
int stack_is_empty(STACK *s);
int stack_is_full(STACK *s);
int stack_push(STACK *s, int x);
int stack_pop(STACK *s, int *x);

#endif
