/*
����
����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�. ���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�,
����� �� ���� 437�� 398�� �д´�. ����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.
�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����. �� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.

���
ù° �ٿ� ����� ����� ����Ѵ�.
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