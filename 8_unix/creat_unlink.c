#include <stdio.h>

int main(void)
{
	int fd;

	fd = creat("./aaa", 0644);
	write(fd, "hello", 5);
	close(fd);
	system("cat aaa");
	unlink("aaa");
	return 0;
}
