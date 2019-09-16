#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int n;

	puts("사각형을 출력합니다.\n");
	do {
		printf("입력할 수: \n");
		scanf("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}

