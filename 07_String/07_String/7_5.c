/*
����
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

�Է�
ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.

���
ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	char *word;
	int alpha[26] = { 0 }, max = 0, result = 0, index;
	
	word = (char*)(malloc(sizeof(char) * 1000000));
	gets(word);

	for (char i = 'a'; i <= 'z'; i++) {
		for (int j = 0; word[j] != NULL; j++)
			if (word[j] == i) alpha[i-'a']++;
	}
	for (char i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; word[j] != NULL; j++)
			if (word[j] == i) alpha[i-'A']++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) {
			result++;
		}
	}

	if (result > 1) printf("?");
	else printf("%c", index + 65);
	return 0;
}