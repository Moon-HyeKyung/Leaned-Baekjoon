/*
���� 
�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
-10,000 �� A, B �� 10,000
a�� b���� ũ�� > ������ < ������ ==
�Է�
ù° �ٿ� A�� B�� �־�����. A�� B�� ���� �� ĭ���� ���еǾ��� �ִ�.
*/

#include <stdio.h>

int main() {
	int a, b;

	do {
		scanf_s("%d %d", &a, &b);
	} while (a < -10000 || b > 10000);

	if (a > b) printf(">");
	else if (a < b) printf("<");
	else printf("==");

	return 0;
}