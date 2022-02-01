#include <stdio.h>
main() {
	int a;

	printf("양의 정수를 입력하세요: ");
	scanf("%d", &a);

	if (a % 2)
		printf("입력한 양의 정수는 홀수입니다.\n");
	else
		printf("입력한 양의 정수는 짝수입니다.\n");
}