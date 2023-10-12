#include <stdio.h>
int swap(int*pa, int*pb);

int main(void)
{
	int a = 10, b = 20;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	swap(&a, &b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}

int swap(int*pa, int*pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;

	return *pa, *pb;
}