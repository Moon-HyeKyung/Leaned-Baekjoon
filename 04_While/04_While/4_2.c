/*
����
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

���
�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int a, b;
	while(1){
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
		if (a <= 0 || b >= 10) break;
	}
	return 0;
}