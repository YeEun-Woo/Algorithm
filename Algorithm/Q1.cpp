#include <stdio.h>
#define _CRT_SECURE_NO_WARNIG

int main(void)
{
	int a, b, c, d;
	int max;
	printf("세 정수의 최댓값을 구합니다.\n");
	printf("a의 값 : "); scanf_s("%d", &a);
	printf("b의 값 : "); scanf_s("%d", &b);
	printf("c의 값 : "); scanf_s("%d", &c);
	printf("d의 값 : "); scanf_s("%d", &d);
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	printf("최댓값은 %d입니다.\n", max);

	return 0;
}