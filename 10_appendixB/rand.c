#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b, c;

	srand(time(NULL));
	a = rand();
	b = rand();
	c = rand();
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	return 0;
}
