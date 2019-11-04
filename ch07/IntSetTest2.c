#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntSet.h"

enum { ADD, RMV, SCH};

int scan_data(int sw)
{
	int data;
	switch (sw) {
	case ADD: printf("추가할 데이터 : "); break;
	case RMV: printf("삭제할 데이터 : "); break;
	case SCH: printf("검색할 데이터 : "); break;
	}
	scanf_s("%d", &data);

	return data;
}

int main(void)
{
	IntSet s1, s2, temp;
	Initialize(&s1, 512); Initialize(&s2, 512); Initialize(&temp 512);

	while (1) {
		int m, x, idx;

		printf("s1 = "); PrintLn(&s1);
		printf("s2 = "); PrintLn(&s2);
	}
}