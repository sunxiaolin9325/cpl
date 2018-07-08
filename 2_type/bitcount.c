#include <stdio.h>

int bitcount(unsigned x) {
	int b;

	for (b = 0; x != 0; x >>= 1)
		if (x & 0x01)
			b++;
	return b;
}

int main(void) {
	printf("count = %d\n", bitcount(-2));

	return 0;
}
