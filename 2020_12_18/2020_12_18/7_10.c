/*
����
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, 
aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. 
��° �ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

���
ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.
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