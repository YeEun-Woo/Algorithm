#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i; //sum=sum*i;
	}
	return sum;
}

int main(void)
{
	int sum;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &sum);
	printf("%d�� factorial�� %d�Դϴ�.\n", sum, factorial(sum));

	return 0;
}
