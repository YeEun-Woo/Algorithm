#include <stdio.h>
#define _CRT_SECURE_NO_WARNIG

int main(void)
{
	int a, b, c, d;
	int max;
	printf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a�� �� : "); scanf_s("%d", &a);
	printf("b�� �� : "); scanf_s("%d", &b);
	printf("c�� �� : "); scanf_s("%d", &c);
	printf("d�� �� : "); scanf_s("%d", &d);
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	printf("�ִ��� %d�Դϴ�.\n", max);

	return 0;
}