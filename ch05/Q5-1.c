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

	printf("정수를 입력하세요: ");
	scanf_s("%d", &sum);
	printf("%d의 factorial은 %d입니다.\n", sum, factorial(sum));

	return 0;
}
