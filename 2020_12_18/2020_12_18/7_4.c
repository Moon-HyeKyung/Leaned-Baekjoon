/*
����
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. �� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), ���ڿ� S�� �������� ���еǾ� �־�����. 
S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.

���
�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNIGS
int main() {
	int t, r;
	char s[21];
	do {
		scanf_s("%d", &t);
	} while (t < 1 || t>1000);

	for (int i = 0; i < t; i++) {
		scanf_s("%d", &r);
		getchar();

		do { gets(s); } while (strlen(s) < 1 || strlen(s) > 20);
		
		for (int j = 0; s[j] != NULL; j++) 
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);
			}
		printf("\n");
	}

	return 0;
}