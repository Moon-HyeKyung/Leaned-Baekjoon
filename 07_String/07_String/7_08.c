/*
����
��ȭ�� �ɰ� ���� ��ȣ�� �ִٸ�, ���ڸ� �ϳ��� ���� ������ �ݼ� ���� �ִ� �� ���� �ð�������� ������ �Ѵ�.
���ڸ� �ϳ� ������ ���̾��� ó�� ��ġ�� ���ư���, ���� ���ڸ� �������� ���̾��� ó�� ��ġ���� �ٽ� ������ �Ѵ�.
���� 1�� �ɷ��� �� 2�ʰ� �ʿ��ϴ�. 1���� ū ���� �Ŵµ� �ɸ��� �ð��� �̺��� �� �ɸ���, �� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� �� �ɸ���.
������� �ҸӴϴ� ��ȭ ��ȣ�� �� ���ڿ� �ش��ϴ� ���ڷ� �ܿ��. ��, � �ܾ �� ��, �� ���ĺ��� �ش��ϴ� ���ڸ� �ɸ� �ȴ�. ���� ���, UNUCIC�� 868242�� ����.
�ҸӴϰ� �ܿ� �ܾ �־����� ��, �� ��ȭ�� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� ���ĺ� �빮�ڷ� �̷���� �ܾ �־�����.
�ܾ�� 2����~15���ڷ� �̷���� �ִ�.
���
ù° �ٿ� ���̾��� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ����Ѵ�.
*/

#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARRNINGS

int main() {
	char word[16];
	int count[10] = { 0 };

	do {
		scanf_s("%s", word, sizeof(word));
	} while (strlen(word) < 2 || strlen(word) > 15);
	for (int i = 0; i < strlen(word); i++) {
		switch (word[i]) {
		case 'A': case 'B': case 'C': count[1]++; break;
		case 'D': case 'E': case 'F': count[2]++; break;
		case 'G': case 'H': case 'I': count[3]++; break;
		case 'J': case 'K': case 'L': count[4]++; break;
		case 'M': case 'N': case 'O': count[5]++; break;
		case 'P': case 'Q': case 'R': case 'S': count[6]++; break;
		case 'T': case 'U': case 'V': count[7]++; break;
		case 'W': case 'X': case 'Y': case 'Z': count[8]++; break;
		}
	}


	return 0;
}