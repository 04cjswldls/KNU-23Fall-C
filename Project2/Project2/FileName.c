#include <stdio.h>

int main()
{
	int n, i, j, k;
	printf("รþ ภิทย : ");
	scanf_s("%d", &n);

	for (i = 1; i < n + 1; i++) {
		for (j = n - i; j > 0; j--) {
			printf(" ");
		}

		for (k = 2 * i - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
