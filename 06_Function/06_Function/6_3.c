/*
*����
� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. 
���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

�Է�
 ù° �ٿ� 1,000���� �۰ų� ���� �ڿ��� N�� �־�����.

���
ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void hansu(int n);
static int count = 0;

int main() {
	int n;
	do {
		scanf_s("%d", &n);
	} while (n > 1000);
	hansu(n);
	printf("%d", count);
	return 0;
}

void hansu(int n) {
	if (n <= 1) {
		count++; return;
	}
	if (n < 100) 	count++;
	else if (n / 100 - (n / 10 % 10) == (n / 10 % 10) - (n % 10)) {
		count++;
	}
	hansu(n - 1);
}


/*
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// �ڸ��� �������� ���ϱ�
void increment_number()
{
	int n;
	scanf("%d", &n);

	int increment_ok = 0;
	char cols[10];
	for (int i = 1; i <= n; ++i)
	{
		// 1 ~99������ ����° ���������� Ż���� ������ �����Ƿ� ��� OK
		if (i < 100)
		{
			increment_ok++;
			continue;
		}
		sprintf(cols, "%d", i);

		// ù��° ���� �ι�° ���� ���� ����
		int diff = cols[1] - cols[0];
		bool isok = true;
		int len = strlen(cols);
		// 3��° ���ں��� �Ǵ� ����
		for (int j = 2; j < len; ++j)
		{
			// �� �ڸ������� �� �������� ���ǿ� ��߳���
			if (cols[j] - cols[j-1] != diff)
			{
				// Ż��
				isok = false;
				// �� �˻��� �ʿ䰡 �����Ƿ� ��
				break;
			}
		}

		// �Ѽ��� �´� ��� OK
		if (isok)
			increment_ok++;
	}

	printf("%d", increment_ok);
}

int main()
{
	increment_number();
	return 0;
}
*/

/*
* ���� �ڵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hansoo(int);
int main() {
		int n, count;
		scanf("%d", &n);
		count=Hansoo(n);
		printf("%d", count);
		return 0;
	}
int Hansoo(int n) {
	int first, second, third; //ù°�ڸ�,��°�ڸ�,��°�ڸ�
	int count = 99; //���̻��� ������ 99+ �ϱ�..^^

	if (n < 100) { //100���� ������ �׳� �Է¼� ����
		return n;
	}
	else if (n <= 1000) {
		for (int i = 100; i <= n; i++) {
			first = i / 100; //��
			second = (i / 10) % 10; //��
			third = i % 10; //��
			if (first - second == second - third) {
				count++;
			}
		}
		return count;

	}

}
*/