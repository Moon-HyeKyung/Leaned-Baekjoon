/*
����
�� ���� �ڿ��� A, B, C�� �־��� �� A��B��C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ��� A = 150, B = 266, C = 427 �̶��
A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�,
����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.

�Է�
ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. A, B, C�� ��� 100���� ���ų� ũ��, 1,000���� ���� �ڿ����̴�.

���
ù° �ٿ��� A��B��C�� ����� 0 �� �� �� �������� ����Ѵ�. 
���������� ��° �ٺ��� �� ��° �ٱ��� A��B��C�� ����� 1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int a[3], mul, count[10] = { 0 };
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] < 100 || a[i] >= 1000) i--;
	}
	mul = a[0] * a[1] * a[2];
	while (mul != 0) {
		switch (mul % 10) {
		case 0: count[0]++; break;
		case 1: count[1]++; break;
		case 2: count[2]++; break;
		case 3: count[3]++; break;
		case 4: count[4]++; break;
		case 5: count[5]++; break;
		case 6: count[6]++; break;
		case 7: count[7]++; break;
		case 8: count[8]++; break;
		case 9: count[9]++; break;
		}
		mul /= 10;
	}
	for(int i=0; i<10; i++)
		printf("%d\n", count[i]);
	return 0;
}