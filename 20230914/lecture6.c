#include <stdio.h>

int main(void)
{
	int a;

	printf("정수 입력 : ");
	scanf_s("%d", &a);

	if (a > 0)
		printf("양의 정수입니다.\n");
	else if (a < 0)
		printf("음의 정수입니다.\n");
	else
		printf("0입니다.\n");

	return 0;
}