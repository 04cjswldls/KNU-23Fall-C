#include <stdio.h>

int f(x);

int main(void)
{
	int num;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
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