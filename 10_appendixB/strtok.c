#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char str[] = "2017/8/6 12:16:58";
	char *delim = "/ :";
	char *token = NULL;

	token = strtok(str, delim); 
	while (token) {
		printf("%s", token);
		token = strtok(NULL, delim);
	}
	printf("\n");
	return 0;
}
