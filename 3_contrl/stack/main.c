#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int is_sort(QUEUE *q)
{

	int i;
	int temp = (q->front + 1) % QUEUESIZE;

	for (i = 1; i <= 27; i++) {
		printf("%2d ", q->data[temp]);
		temp = (temp + 1) % QUEUESIZE;
	}

	printf("\n");

	temp = (q->front + 1) % QUEUESIZE;
	for (i = 1; i <= 27; i++) {
		if (q->data[temp] != i) {
			return 0;
		}

		temp = (temp + 1) % QUEUESIZE;
	}

	return 1;
}

int main()
{

	QUEUE *q;
	STACK *s1;
	STACK *s2;
	STACK *s3;
	int temp;
	int time = 0;
	int i;

	q = queue_create();
	if(q == NULL)
		exit(1);

	//返回值都未处理
	s1 = stack_create();
	s1->top = s1->button = STACKSIZE - 1 - 5;
	s2 = stack_create();
	s2->top = s2->button = STACKSIZE - 1 - 12;
	s3 = stack_create();
	s3->top = s3->button = STACKSIZE - 1 - 12;

	for(i = 1; i <= 27; i++) {
		queue_en(q, i);
	}

	while (1) {
		//usleep(5000);
		queue_out(q, &temp);
		stack_push(s1, temp);

		if (stack_is_full(s1)) {
			stack_pop(s1, &temp);
			stack_push(s2, temp);
			for (i = 0; i < 4; i++)	{
				stack_pop(s1, &temp);
				queue_en(q, temp);
			}

			if (stack_is_full(s2)) {
				stack_pop(s2, &temp);
				stack_push(s3, temp);
				for (i = 0; i < 11; i++) {
					stack_pop(s2, &temp);
					queue_en(q, temp);
				}

				if (stack_is_full(s3)) {
					for (i = 0; i < 12; i++) {
						stack_pop(s3, &temp);
						queue_en(q, temp);
					}

					time++;
					if (is_sort(q))
						break;
				}
			}
		}
	}

	printf("time = %d\n", time * 12);
	printf("min = %d\n", time * 12 * 60);
	return 0;
}

