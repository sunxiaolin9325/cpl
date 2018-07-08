#include <unistd.h>

#define BUFSIZE 1024

int main(void)
{
	char buf[BUFSIZE];
	int n;

	//while ((n = read(0, buf, BUFSIZE)) > 0)
	while ((n = read(0, buf, 1)) > 0)
		write(1, buf, n), sleep(1);
	return 0;
}

