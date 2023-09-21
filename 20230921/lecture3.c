#include <stdio.h>

int factorial(int num);

int main(void)
{
	int num;

	printf("계산할 팩토리얼 값 입력 : ");
	scanf_s("%d", &num);

	printf("%d! = %d", num, factorial(num));
	return 0;
}

int factorial(int num) {
	if (num == 0) return 1;
	return num * factorial(num - 1);
}