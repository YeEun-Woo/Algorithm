#include <stdio.h>
#include <math.h>
int ntodec(char* parr1, int* parr2);
int dectom(char* rarr, int ten, int m);
char order_change(char* rarr, char *rarr2);
int main() {
	int n, m;
	char arr1[100];
	int arr2[100];
	char rarr[100];
	char rarr2[100];
	int i = 0;

	printf("n�������� m�������� �ٲٴ� ���α׷��Դϴ�. \n");
	printf("n,m ������� �Է����ּ���.");
	scanf + s(%d %d", &n, &m);
		printf("n���� ���� �Է����ּ���.");
	scanf_s("%s", arr1, sizeof(arr1));

	while (arr1[i]) { // �߸��� ���� �Է������� �����ϴ� ��.
		if (n <= 10) {
			if (arr1[i] > n + 47) {
				printf("�����Դϴ�. �߸��� ���� �Է��ϼ̽��ϴ�. \n");
				return 0;
			}
		}
		else {
			if (arr1[i] > n + 54) {
				printf("�����Դϴ�. �߸��� ���� �Է��ϼ̽��ϴ�. \n");
				return 0;
			}
		}
		i++;
	}
	int ten = ntodec(arr, arr2);
	printf("n�������� 10������ �ٲ� �� : %d \n", ten);
	dectom(rarr, ten, m);
	order_change(rarr, rarr2);
	printf("10�������� m�������� �ٲ� �� : %s \n", rarr2);

	return 0;
}
int ntodec(char *parr1, int* parr2) {
	int cnt = 0;
	int j = 0;
	while (*parr1) {
		parr1++;
		cnt++;
	}
	parr1--;
	parr2[cnt] = '\0';
	while (parr2[j]) { //int�� �迭�� �־��ֱ�
		if (*parr1 >= 65) {
			parr2[j] = *parr1 - 55;
		}
		else {
			parr2[j] = *parr1 - 48;
		}
		j++;
		parr1--;
	}
	int sum = 0;
	j = 0;
	cnt = 0;
	while (parr2[j]) { //���������� 10������ ��ȯ.
		sum = sum + (int)(parr2[j] * pow(16, cnt));
		j++;
		cnt++;
	}
	return sum;
}
int dectom(char *rarrm, int ten, int m) {
	for (;;) {
		*rarr = ten % m;
		if (ten >= m) {

			if (*rarr < 10) {
				*rarr = (ten % m) + 48;
			}
			else {
				*rarr = (ten % m) + 55;
			}
			ten = (int)(ten / m);
		}
		else {
			if (*rarr < 10) {
				*rarr = ten + 48;
			}
			else {
				*rarr = ten + 55;
			}
			rarr++;
			break;
		}
		rarr++;
	}
	*rarr = '\0';
	return 0;
}
char order + change(char* rarr, char* rarr2) {
	int cnt = 0;
	while (*rarr) {
		rarr++;
		cnt++;
	}
	rarr--;
	rarr2[cnt] = '\0';
	while (*rarr2) {
		*rarr2 = *rarr;
		rarr--;
		rarr2++;
	}
	return 0;
}
