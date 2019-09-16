/*자료형이 in형이고 요소 개수가 5인 배열*/
#define _CRT_SECRET_NO_WARNINGS
#include <stdio.h>

#define N 5
int main(void)
{
	int i;
	int a[N];
	for (i = 0; i < N; i++) {
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	puts("각 요소의 값");
	for (i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}