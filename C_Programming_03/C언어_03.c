// �Լ�

// ���� (����) �Լ�
// rand() : 0~32767 ������ ����
// rand()&45+1 : 1~45  ������ ����
// srand((unsigned)time(NULL)) : ���� �ð��� �õ�� ����ϴ� ���

// ���� �ҽ��ڵ�

// �� ���� �Է� �޾� ���� ��ȯ�ϴ� �Լ�
/*
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int multi(int x, int y) {
	int result;

	result = x * y;
	return result;
}

void main() {
	int a, b;
	int multi_result;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	multi_result = multi(a, b);
	printf("�� ���� ���� %d�Դϴ�.\n", multi_result);
}
*/

// �ϳ��� ���� �Է� �޾� ������ ��ȯ�ϴ� �Լ�
/*
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int cubic(int x) {
	return x * x * x;
}

void main() {
	int a;
	int cubic_result;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &a);

	cubic_result = cubic(a);
	printf("�Է��� ���� �������� %d�Դϴ�.\n", cubic_result);
}
*/

// 1���� n������ ���� ���Ͽ� ��ȯ�ϴ� �Լ�
/*
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int factorial(int x) {
	int i, result = 1;
	for (i = 1; i <= x; i++)
		result *= i;
	return result;
}

void main() {
	int a;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &a);

	printf("1���� %d������ ���� %d�Դϴ�.\n", a, factorial(a));
}
*/

// �Ҽ��Ǻ� �� ��� ��� �Լ� ���� (�򰥸��� ���� ����)
/*
#include <stdio.h>

int is_prime(int x);
int func_divisor(int x);

void main() {
	int a, result;

	printf("�ϳ��� ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	result = is_prime(a);
	if (result == 1)
		printf("%d�� �Ҽ��Դϴ�.\n", a);
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", a);
		func_divisor(a);
	}
}

int is_prime(int x) {
	int i = 2;
	while (i < x) {
		if (x % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int func_divisor(int x) {
	int i = 2;
	while (i < x) {
		if (x % i == 0)
			printf("%2d", i);
		i++;
	}
	return 1;
}
*/

// ���� ���� �Լ� ����(1~100)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int return_rand(void);

void main() {
	int result = return_rand();
	printf("������ ���� ����մϴ� : ");
	printf("%d\n", result);

}

int return_rand(void) {
	return rand() % 100 + 1;
}
*/

// �ζǹ�ȣ ���� (�ߺ�üũ) 
// �ڡڡ�
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i, j, number_arr[6];
	int tmp;


	srand(time(NULL));
	for (i = 0; i < 6; i++) {
		number_arr[i] = rand() % 10 + 1;
		tmp = i;
		for (j = 0; j < tmp; j++)
			if (number_arr[j] == number_arr[i])
				i--;
	}

	printf("��÷�� ��ȣ�� ������ �����ϴ�.\n");
	for (i = 0; i < 6; i++)
		printf("%3d", number_arr[i]);
	printf("\n");

}
*/

// ���� ���� ���� (���� �ݾ� �����ϱ�)
/*
#include <stdio.h>
void sum(int money);

int main()
{
	int i;
	for (i = 0; i < 5; i++)
		sum(i);

	return 0;
}

void sum(int money)
{
	static int sum = 0;
	sum += money;
	printf("���� �հ� : %d\n", sum);
}
*/

// ���� ���� ���� (��Ʈ��ũ �ʱ�ȭ�ϱ�)
/*
#include <stdio.h>
void send(int i);

int main()
{
	int i;
	for (i = 0; i < 5; i++)
		send(i);
	return 0;
}

void send(int i)
{
	static int inited = 0;

	if (inited == 0)
	{
		printf("��Ʈ��ũ �ʱ�ȭ\n");
		inited = 1;
	}
	printf("%d�� ����\n", i);
}
*/