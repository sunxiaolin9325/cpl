#include <stdio.h>

#define cnct(x, y)	#x #y
#define cat(x, y) 	x ## y
#define xcat(x, y)	cat(x, y)
#define tempfile(dir)	#dir "/temp/%s"

char a1[] = "hello";
char a2[] = "world";
char a12[] = "nihao";

int main(void)
{
	printf("%s\n", cnct(hel, lo));
	printf("%s\n", cat(a, 1));
	printf("%s\n", cat(a, 2));
	printf("%s\n", xcat(xcat(a, 1), 2));
	printf(tempfile(/home/lin/learn), "aaa");

	return 0;
}
