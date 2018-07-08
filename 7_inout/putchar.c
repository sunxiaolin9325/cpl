#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		printf("%c", c + 1);
		fflush(stdout);
		//fflush(NULL);
	}
	return 0;
}
