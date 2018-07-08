#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//unsigned long int next = 1;

//int rand(void)
//{
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next/65536) % 32768;
//}
//
//void srand(unsigned int seed)
//{
//	next = seed;
//}

int main(void)
{
	int a;
	int b;
	int i;

	//srand(time(NULL));
/*
	for (i = 0; i < 10; i++) {
		a = rand();
		printf("a = %d\n", a);
	}
	*/

	b = rand();
	printf("b = %d\n", b);

	return 0;
}
