#include <stdio.h>
#include <unistd.h>

int main(void)
{
	fprintf(stdout, "stdout");	
	sleep(1);
	fprintf(stderr, "stderr");	
	sleep(1);
	fprintf(stdout, "stdout");	
	sleep(1);
	fprintf(stderr, "stderr");	
	sleep(1);
	fprintf(stdout, "stdout");	
	sleep(1);
	fprintf(stderr, "stderr");	
	sleep(1);
	fprintf(stdout, "stdout");	
	sleep(1);
	fprintf(stderr, "stderr");	

	return 0;
}
