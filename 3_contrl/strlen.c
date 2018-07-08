#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "hello world  ";
	char *str1 = "";
	char str2[10] = {'\0', '\0', '\0'};

	printf("%ld\n", strlen(str));
	printf("%ld\n", strlen(str1));
	printf("%ld\n", strlen(str2));

	printf("%ld\n", sizeof(*str));
	printf("%ld\n", sizeof(*str1));
	printf("%ld\n", sizeof(*str2));
}
