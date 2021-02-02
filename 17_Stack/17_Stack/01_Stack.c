/*
����
������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� �� �ټ� �����̴�.

push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

�Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.

���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void push(int x, int* stack, int* index);
int pop(int* stack, int* index);
int size(int index);
int top(int* stack, int index);

int main() {
	int n, index = -1;
	int* stack;
	char str[10];
	scanf_s("%d", &n);
	printf("%d", 2);
	stack = (int*)(malloc(sizeof(int) * n)); // �ִ� n��ŭ push �ϴϱ�

	for (int i = 0; i < n; i++) {
		int num;
		gets(str);
		
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == ' ') str[j] = NULL;
		}

		if (strcmp(str, "push")) {
			push(num, &stack, &index);
		}
		else if (strcmp(str, "pop")) {
			printf("%d\n", pop(&stack, &index));
		}
		else if (strcmp(str, "size")) {
			printf("%d",size(index));
		}
		else if (strcmp(str, "top")) {
			printf("%d",top(&stack, index));
		}
		else if (strcmp(str, "empty")) {
			if (index < 0) printf("1\n");
			else printf("0\n");
		}
	}
	return 0;
}

void push(int x,int* stack,int* index) {
	stack[++*index] = x;
}

int pop(int* stack, int* index) {
	if (index < 0) return -1;
	return stack[*index--];
}

int size(int index) {
	return index + 1;
}

int top(int* stack, int index) {
	if (index < 0) return - 1;
	return stack[index];
}