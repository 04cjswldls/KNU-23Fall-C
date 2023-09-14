#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i < 5) {
		for (int j = 0; j < i; j++)
			printf("  ");

		if (i % 2 == 1)
			printf("| X |\n");
		else
			printf("| O |\n");

		if (i != 4)
			printf("---------------\n");

		i++;
	}
	return 0;
}