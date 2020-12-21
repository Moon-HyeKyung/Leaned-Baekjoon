/*
문제
상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734와 893을 칠판에 적었다면,
상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.
두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다. 두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.

출력
첫째 줄에 상수의 대답을 출력한다.
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char a[4], b[4], temp, check = 0;
	
	scanf_s("%s", a, sizeof(a));
	scanf_s("%s", b, sizeof(b));

	temp = a[0];
	a[0] = a[2];
	a[2] = temp;

	temp = b[0];
	b[0] = b[2];
	b[2] = temp;

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			if (a[i] > b[i]) {
				check = 1; break;
			}
			else if (a[i] < b[i]) {
				check = 0; break;
			}
		}
		else if (i == 1) {
			if (a[i] > b[i]) {
				check = 1; break;
			}
			else if (a[i] < b[i]) {
				check = 0; break;
			}
		}
		else {
			if (a[i] > b[i]) {
				check = 1; break;
			}
			else if (a[i] < b[i]) {
				check = 0; break;
			}
		}
	}

	if (check == 1) {
		temp = a[0];
		a[0] = a[2];
		a[2] = temp;
		printf("%s", a);
	}
	else {
		temp = b[0];
		b[0] = b[2];
		b[2] = temp;
		printf("%s", b);
	}
	return 0;
}