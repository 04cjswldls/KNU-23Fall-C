#include <stdio.h>

int factorial(int num);

int main(void)
{
	int num;

	printf("����� ���丮�� �� �Է� : ");
	scanf_s("%d", &num);

	printf("%d! = %d", num, factorial(num));
	return 0;
}

int factorial(int num) {
	if (num == 0) return 1;
	return num * factorial(num - 1);
}