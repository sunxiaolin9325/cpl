#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
	//while ((c = getchar()) != '\n') {
		printf("%c", c);
		sleep(1);
		printf("%c", c);
		//fflush(stdout);
		//fflush(NULL);
	}
	return 0;
}
