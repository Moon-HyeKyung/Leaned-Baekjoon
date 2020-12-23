/*
문제 
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
-10,000 ≤ A, B ≤ 10,000
a가 b보다 크면 > 작으면 < 같으면 ==
입력
첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다.
*/

#include <stdio.h>

int main() {
	int a, b;

	do {
		scanf_s("%d %d", &a, &b);
	} while (a < -10000 || b > 10000);

	if (a > b) printf(">");
	else if (a < b) printf("<");
	else printf("==");

	return 0;
}