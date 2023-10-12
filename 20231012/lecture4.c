#include <stdio.h>

int swap(int* pa, int* pb);

int main(void)
{
	int arr[5] = { 5,4,1,2,3 };

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (int i = 0; i < 5; i++) {
		int k = i;
		for (int j = i + 1; j < 5; j++) {
			if (arr[j] < arr[k])
				k = j;
		}
		swap(&arr[i], &arr[k]);
	}

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}

int swap(int* pa, int* pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;

	return *pa, * pb;
}