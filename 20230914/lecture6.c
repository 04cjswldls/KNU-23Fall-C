#include <stdio.h>

int main(void)
{
	int a;

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	if (a > 0)
		printf("���� �����Դϴ�.\n");
	else if (a < 0)
		printf("���� �����Դϴ�.\n");
	else
		printf("0�Դϴ�.\n");

	return 0;
}