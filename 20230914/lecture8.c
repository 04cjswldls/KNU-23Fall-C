#include <stdio.h>

int main(void)
{
	int jumsu;

	printf("점수 입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 0 && jumsu <= 100) {
		switch (jumsu / 10) {
		case 10:
		case 9:
			printf("A학점\n");
			break;
		case 8:
			printf("B학점\n");
			break;
		case 7:
			printf("C학점\n");
			break;
		case 6:
			printf("D학점\n");
			break;
		default:
			printf("F학점\n");
			break;
		}
	}
	else
		printf("잘못 입력\n");

	return 0;
}