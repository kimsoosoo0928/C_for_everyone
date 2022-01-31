#include <stdio.h>

void test3(void); // 함수 선언

int main()
{
	test3();
	test3();
	test3();
}

void test3(void) {
	printf("Hello\n");
}