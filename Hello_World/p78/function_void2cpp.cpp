#include <stdio.h>

void test3(void); // �Լ� ����

int main()
{
	test3();
	test3();
	test3();
}

void test3(void) {
	printf("Hello\n");
}