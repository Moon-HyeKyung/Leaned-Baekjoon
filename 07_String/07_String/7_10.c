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
	int n, len, alpha[26] = { 0 }, group = 1, count = 0;
	char str[101], check;
	do {
		scanf_s("%d", &n);
	} while (n > 100);

	for (int i = 0; i < n; i++) {
		scanf_s("%s", str, sizeof(str));
		len = strlen(str);
		check = str[0];
		alpha[check - 'a']++;
		for (int j = 1; j < len; j++) {
			if (str[i] != check && alpha[check - 'a'] == 0) {
				check = str[i];
			}
			else if (alpha[check - 'a'] > 0&& str[i] != check) {
				group = 0;
			}
			alpha[check - 'a']++;
		}
		if(group==1) count++;
		group = 1;
	}
	printf("%d", count);
	return 0;
}