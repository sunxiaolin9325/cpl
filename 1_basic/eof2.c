#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
		printf("c = %c", c);

	return 0;
}
