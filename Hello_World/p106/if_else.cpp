#include <stdio.h>

int main() {
	int a, b, c;
	printf("서로 다른 정수 3개를 입력하세요:\n");

	printf("a = ");
	scanf("%d", &a);

	printf("b = ");
	scanf("%d", &b);

	printf("c = ");
	scanf("%d", &c);


	if ((a > b) && (a > c))
		printf("a는 b와 c보다 큰 수이다\n");
	else
		printf("a는 적어도 b와 c중 하나 보다는 적다.\n");
	if ((b > a || (b > c)))
		printf("b는 적어도 a와 c중 하나 보다는 크다.\n");
	else
		printf("b는 가장 작은 수이다.\n");
}