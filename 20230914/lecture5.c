#include <stdio.h>

int main(void)
{
	int year;

	printf("년도 입력 : ");
	scanf_s("%d", &year);

	int yy = (year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0);

	if (yy)
		printf("윤년입니다.\n");
	else
		printf("윤년이 아닙니다.\n");

	return 0;
}