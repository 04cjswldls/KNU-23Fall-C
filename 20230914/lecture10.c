#include <stdio.h>

int main(void)
{
	for (int i = 2; i < 10; i++) {
		if (i == 5)
			continue;
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return  0;
}