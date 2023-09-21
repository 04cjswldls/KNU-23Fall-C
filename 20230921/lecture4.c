#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	double x = 0, y = 0;

	int count = 0, circle = 0;

	srand(time(NULL));

	while (count < 1000000000) {

		double num;

		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		num = (double)pow((double)y, (double)2) + (double)pow((double)x, (double)2);

		if (num <= 1) {
			circle++;
		}

		if (count != 0) {
			if (count % 100000000 == 0) {
				printf(" %d%%진행 . . 원주율 : %f ", count / 10000000, (double)circle / count * 4);
				for (int i = 0; i < count / 100000000; i++) {
					printf("■");
				}
				for (int i = 0; i < 10 - (count / 100000000); i++) {
					printf("□");
				}
				printf("\n");
			}
		}

		count++;
	}

	printf("%d%%진행 . . 원주율 : %f ■■■■■■■■■■\n", 100, (double)circle / count * 4);

	printf("원주율 : %f", (double) circle / count * 4);
	return 0;
}