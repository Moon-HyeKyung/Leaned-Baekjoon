/*
문제
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main() {
	int n;

	do {
		scanf_s("%d", &n);
	} while (n < 1 || n>100);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	
	return 0;
}