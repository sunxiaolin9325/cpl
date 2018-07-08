#include <stdio.h>

int main(void)
{
	char *s = "hello, world";

	sprintf(s, "%s", "nihao");
	printf("1=====\n");
	printf("%s\n", s);


	return 0;
}
