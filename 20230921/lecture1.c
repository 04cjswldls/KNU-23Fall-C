#include <stdio.h>

int f(x);

int main(void)
{
	int num;
	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("%d\n", f(num));
	return 0;
}

int f(x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}