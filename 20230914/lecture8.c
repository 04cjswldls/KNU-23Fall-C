#include <stdio.h>

int main(void)
{
	int jumsu;

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 0 && jumsu <= 100) {
		switch (jumsu / 10) {
		case 10:
		case 9:
			printf("A����\n");
			break;
		case 8:
			printf("B����\n");
			break;
		case 7:
			printf("C����\n");
			break;
		case 6:
			printf("D����\n");
			break;
		default:
			printf("F����\n");
			break;
		}
	}
	else
		printf("�߸� �Է�\n");

	return 0;
}