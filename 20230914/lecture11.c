#include <stdio.h>

int main(void)
{
	int i = 2;
	while (i < 10)
	{
		if (i == 5) {
			i++;
			continue;
		}
		int j = 1;
		while (j < 10)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}