#include <stdio.h>
#define _CRT_SECURE_NO_WARNIG

int main(void)
{
	int a, b, c;
	int min;
	printf("세 정수의 최솟값을 구합니다.\n");
	printf("a의 값 : "); scanf_s("%d", &a);
	printf("b의 값 : "); scanf_s("%d", &b);
	printf("c의 값 : "); scanf_s("%d", &c);
	
	min = a;
	if (b > min) min = b;
	if (c > min) min = c;


	printf("최솟값은 %d입니다.\n", min);

	return 0;
}