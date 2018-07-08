#include <stdio.h>

int main(void)
{
	FILE *fp;
	int sum = 0;
	int n;

	while (scanf("%d", &n) == 1)
		printf("%d\n", sum += n);

	return 0;
}
