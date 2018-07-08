#include <stdio.h>

int fcnb(int a, int b)
{
	printf("fcnb = %x\n", fcnb);
	printf("*fcnb = %x\n", *fcnb);

	return a + b;
}

int fcna(int a, int b, int (*fcnb)(int a, int b))
{
	printf("fcna = %x\n", fcna);
	printf("*fcna = %x\n", *fcna);

	printf("fcnab = %x\n", fcnb);
	printf("*fcnab = %x\n", *fcnb);

	//return (*fcn)(a, b);
	return fcnb(a, b);
}

int main(void)
{
	//printf("fcn() = %d\n", fcnc(3, 4, fcn));
	printf("fcn() = %d\n", fcna(3, 4, &fcnb));
	return 0;
}
