#include <stdio.h>

int calculator(int sel, int num1, int nnum2);

int main(void)
{
	int sel, num1, num2;

	printf("1.더하기 2. 빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);

	printf("숫자 1을 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("숫자 2를 입력하시요 : ");
	scanf_s("%d", &num2);

	printf("%d", calculator(sel, num1, num2));
	return 0;
}

int calculator(int sel, int num1, int num2) {
	if (sel == 1) return num1 + num2;
	else if (sel == 2) return num1 - num2;
	else if (sel == 3) return num1 * num2;
	else return num1 / num2;
}