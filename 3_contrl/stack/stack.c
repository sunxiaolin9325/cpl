#include <stdlib.h>
#include"stack.h"

QUEUE *queue_create()
{
	QUEUE * q;

	q = malloc(sizeof(*q));
	if (q == NULL)
		return NULL;

	q->front = q->tail = 0;
	return q;
}

int queue_is_empty(QUEUE *q)
{
	if (q->front == q->tail)
		return 1;

	return 0;
}

int queue_is_full(QUEUE *q)
{
	if ((q->tail+1) % QUEUESIZE == q->front)
		return 1;

	return 0;
}

int queue_en(QUEUE *q, int x)
{
	if (queue_is_full(q))
		return -1;

	q->tail = (q->tail + 1) % QUEUESIZE;
	q->data[q->tail] = x;
	return 0;
}

int queue_out(QUEUE *q, int *x)
{
	if (queue_is_empty(q)) 
		return -1;

	q->front = (q->front + 1) % QUEUESIZE;
	*x = q->data[q->front];
	return 0;
}

STACK *stack_create()
{
	STACK *s;

	s = malloc(sizeof(*s));
	if (s == NULL)
		return NULL;

	s->top = s->button = -1;
	return s;
}

int stack_is_empty(STACK *s)
{
	if (s->top == s->button)
		return 1;

	return 0;
}

int stack_is_full(STACK *s)
{
	if (s->top == STACKSIZE - 1)
		return 1;

	return 0;
}

int stack_push(STACK *s, int x)
{
	if (stack_is_full(s))
		return -1;

	s->data[++s->top] = x;
	return 0;
}

int stack_pop(STACK *s, int *x)
{
	if(stack_is_empty(s))
		return -1;

	*x = s->data[s->top--];
	return 0;
}


