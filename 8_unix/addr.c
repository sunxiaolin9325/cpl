#include <stdio.h>

int main(void)
{
	int a[3] = {0, 1, 2};

	printf("&a[0] = %x\n", &a[0]);	//一级指针
	printf("a = %x\n", a);		//一级指针
	printf("&a = %x\n", &a);	//二级指针

	//此时调用a或者*(&a)效果都是一样的
	//如同调用fcn()或者(*fcn)()
	printf("a = %x\n", a);
	printf("*(&a) = %x\n", *(&a));

	return 0;
}

