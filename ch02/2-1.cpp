/*�ڷ����� in���̰� ��� ������ 5�� �迭*/
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
	puts("�� ����� ��");
	for (i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}