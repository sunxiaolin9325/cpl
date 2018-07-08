#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		printf("%c", c);
		if (c == ' ') {
			while ((c = getchar()) == ' ')
				;
			printf("%c", c);
		}
	}

	return 0;
}
