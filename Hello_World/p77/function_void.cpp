#include <stdio.h>

void test2(int x);

int main() {
	test2(10);
}


void test2(int x) {
	printf("메인 함수 로부터 받은 값은 %d입니다\n", x);
}