/*
����
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. 
������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.
"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.
OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. 
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.

���
�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, count = 0, sum = 0;
	char str[80];
	scanf_s("%d", &n);
	getchar("");
	for (int i = 0; i < n; i++) {
		gets(str);
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == 'O' || str[j] == 'o') count++;
			if (str[j] == 'X' || str[j] == 'x') count = 0;
			sum += count;
		}
		printf("%d\n", sum);
		sum = 0;
		count = 0;
	}
	return 0;
}