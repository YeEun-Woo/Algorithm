/*���� �Ʒ��� ������ �̵ �ﰢ���� ����մϴ�.*/
#define _CRT_SECRET_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, n;
	do {
		printf("�� �� �ﰢ���Դϱ�? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}