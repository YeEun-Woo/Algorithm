#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int n;

	puts("�簢���� ����մϴ�.\n");
	do {
		printf("�Է��� ��: \n");
		scanf("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}

