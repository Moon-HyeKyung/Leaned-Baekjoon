/*
* 문제
* N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
* 
* 입력
* 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

* 출력
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
*/

#include <stdio.h>
#define _CRT_NO_WARNINGS

int main() {
	int n, input, max, min;
	do {
		scanf_s("%d", &n);
		scanf_s("%d", &input);
		max = input;
		min = input;
	} while (n < 1 || n>1000000);
	for (int i = 1; i < n; i++) {
		scanf_s("%d", &input);
		if (max < input) max = input;
		if (min > input) min = input;
	}
	printf("%d %d", min, max);
	return 0;
}