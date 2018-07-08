#include<stdio.h>

void shell_sort(int a[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j = i - gap; j >= 0 && a[j] > a[j+gap]; j -= gap) {
				temp = a[j];
				a[j] = a[j+gap];
				a[j+gap] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int a[] = {1, 4, 73, 2, 4, -58, 34, -78, 39, 23};

	shell_sort(a, 10);

	for (i = 0; i < 10; i++) {
		printf("%d%c", a[i], (i+1) % 10 ? ' ' : '\n');
	}


}
