// 함수

// 랜덤 (난수) 함수
// rand() : 0~32767 사이의 정수
// rand()&45+1 : 1~45  사이의 정수
// srand((unsigned)time(NULL)) : 현재 시각을 시드로 사용하는 방법

// 복습 소스코드

// 두 정수 입력 받아 곱을 반환하는 함수
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

	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	multi_result = multi(a, b);
	printf("두 수의 곱은 %d입니다.\n", multi_result);
}
*/

// 하나의 정수 입력 받아 세제곱 반환하는 함수
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

	printf("수를 입력하세요 : ");
	scanf("%d", &a);

	cubic_result = cubic(a);
	printf("입력한 수의 세제곱은 %d입니다.\n", cubic_result);
}
*/

// 1부터 n까지의 곱을 구하여 반환하는 함수
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

	printf("수를 입력하세요 : ");
	scanf("%d", &a);

	printf("1부터 %d까지의 곱은 %d입니다.\n", a, factorial(a));
}
*/

// 소수판별 및 약수 출력 함수 구현 (헷갈리기 쉬운 개념)
/*
#include <stdio.h>

int is_prime(int x);
int func_divisor(int x);

void main() {
	int a, result;

	printf("하나의 수를 입력하세요 : ");
	scanf("%d", &a);

	result = is_prime(a);
	if (result == 1)
		printf("%d는 소수입니다.\n", a);
	else {
		printf("%d는 소수가 아닙니다.\n", a);
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

// 난수 생성 함수 구현(1~100)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int return_rand(void);

void main() {
	int result = return_rand();
	printf("임의의 값을 출력합니다 : ");
	printf("%d\n", result);

}

int return_rand(void) {
	return rand() % 100 + 1;
}
*/

// 로또번호 생성 (중복체크) 
// ★★★
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

	printf("추첨된 번호는 다음과 같습니다.\n");
	for (i = 0; i < 6; i++)
		printf("%3d", number_arr[i]);
	printf("\n");

}
*/

// 정적 변수 예제 (저축 금액 누적하기)
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
	printf("현재 합계 : %d\n", sum);
}
*/

// 정적 변수 예제 (네트워크 초기화하기)
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
		printf("네트워크 초기화\n");
		inited = 1;
	}
	printf("%d를 보냄\n", i);
}
*/