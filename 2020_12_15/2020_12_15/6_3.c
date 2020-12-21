/*
*문제
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
 첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void hansu(int n);
static int count = 0;

int main() {
	int n;
	do {
		scanf_s("%d", &n);
	} while (n > 1000);
	hansu(n);
	printf("%d", count);
	return 0;
}

void hansu(int n) {
	if (n <= 1) {
		count++; return;
	}
	if (n < 100) 	count++;
	else if (n / 100 - (n / 10 % 10) == (n / 10 % 10) - (n % 10)) {
		count++;
	}
	hansu(n - 1);
}


/*
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// 자릿수 등차수열 구하기
void increment_number()
{
	int n;
	scanf("%d", &n);

	int increment_ok = 0;
	char cols[10];
	for (int i = 1; i <= n; ++i)
	{
		// 1 ~99까지는 세번째 등차수열을 탈락할 조건이 없으므로 모두 OK
		if (i < 100)
		{
			increment_ok++;
			continue;
		}
		sprintf(cols, "%d", i);

		// 첫번째 수와 두번째 수의 차이 산출
		int diff = cols[1] - cols[0];
		bool isok = true;
		int len = strlen(cols);
		// 3번째 숫자부터 판단 시작
		for (int j = 2; j < len; ++j)
		{
			// 각 자릿수마다 비교 등차수열 조건에 어긋나면
			if (cols[j] - cols[j-1] != diff)
			{
				// 탈락
				isok = false;
				// 더 검사할 필요가 없으므로 끝
				break;
			}
		}

		// 한수가 맞는 경우 OK
		if (isok)
			increment_ok++;
	}

	printf("%d", increment_ok);
}

int main()
{
	increment_number();
	return 0;
}
*/

/*
* 예진 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hansoo(int);
int main() {
		int n, count;
		scanf("%d", &n);
		count=Hansoo(n);
		printf("%d", count);
		return 0;
	}
int Hansoo(int n) {
	int first, second, third; //첫째자리,둘째자리,셋째자리
	int count = 99; //백이상은 무조건 99+ 니깡..^^

	if (n < 100) { //100보다 작으면 그냥 입력수 리턴
		return n;
	}
	else if (n <= 1000) {
		for (int i = 100; i <= n; i++) {
			first = i / 100; //백
			second = (i / 10) % 10; //십
			third = i % 10; //일
			if (first - second == second - third) {
				count++;
			}
		}
		return count;

	}

}
*/