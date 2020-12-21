/*
문제
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, 
aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 
둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

출력
첫째 줄에 그룹 단어의 개수를 출력한다.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, len, count[26] = { 0 }, group = 1;
	char str[101], check;
	do {
		scanf_s("%d", &n);
	} while (n > 100);

	for (int i = 0; i < n; i++) {
		scanf_s("%s", str, sizeof(str));
		len = strlen(str);
		check = str[0];
		for (int j = 1; j < len; j++) {
			count[check - 'a']++;
			if (str[i] != check && count[check - 'a'] == 0) {
				check = str[i];
			}
			else if (count[check - 'a'] > 0) {

			}
		}
	}

	return 0;
}