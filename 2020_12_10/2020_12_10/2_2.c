/*
����
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 
70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
*/

#include <stdio.h>

int main() {
	int score;

	do {
		scanf_s("%d", &score);
	} while (score < 0 || score > 100);

	switch (score / 10) {
		case 10: case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		default: printf("F");
	}

	return 0;
}