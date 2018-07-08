#include <stdio.h>
#include <unistd.h>

int main(void)
{
	sleep(1);
	printf("1====\n");
	sleep(1);
	fprintf(stderr, "2=====\n");
	sleep(1);

	return 0;
}
