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

	printf("n진법에서 m진법으로 바꾸는 프로그램입니다. \n");
	printf("n,m 순서대로 입력해주세요.");
	scanf + s(%d %d", &n, &m);
		printf("n진법 수를 입력해주세요.");
	scanf_s("%s", arr1, sizeof(arr1));

	while (arr1[i]) { // 잘못된 수를 입력했을때 종료하는 것.
		if (n <= 10) {
			if (arr1[i] > n + 47) {
				printf("오류입니다. 잘못된 수를 입력하셨습니다. \n");
				return 0;
			}
		}
		else {
			if (arr1[i] > n + 54) {
				printf("오류입니다. 잘못된 수를 입력하셨습니다. \n");
				return 0;
			}
		}
		i++;
	}
	int ten = ntodec(arr, arr2);
	printf("n진법에서 10진수로 바꾼 수 : %d \n", ten);
	dectom(rarr, ten, m);
	order_change(rarr, rarr2);
	printf("10진수에서 m진법으로 바꾼 수 : %s \n", rarr2);

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
	while (parr2[j]) { //int형 배열에 넣어주기
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
	while (parr2[j]) { //최종적으로 10진수로 변환.
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
