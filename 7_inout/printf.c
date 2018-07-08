#include <stdio.h>

int main(void)
{
	//float f = 1.234567891234;
	double f = 1.234567891234;
	char *s = "hello, world";

	printf("f = %f\n", f);
	printf("f = %e\n", f);
	printf("f = %g\n", f);
	printf("s = %.*s\n", 7, s);

	return 0;
}
