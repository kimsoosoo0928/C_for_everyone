#include <stdio.h>

int func1(void);
char func2(void);

void func3(void);
void func4(float x);

main() {
	int a;
	char b;
	float c;
	a = func1();
	b = func2();

	printf("func1() 함수로 전달받은 값은 %d입니다.\n", a);
	printf("func2() 함수로 전달받은 문자는 %c입니다.\n", b);

	func3();

	printf("func4() 함수로 전달할 실수를 입력하세요: ");
	scanf("%f", &c);

	func4(c);
}

int func1(void) {
	return 1;
}

char func2(void) {
	return 'a';
}

void func3(void) {
	printf("hello\n");
}

void func4(float x) {
	printf("main() 함수로부터 받은 실수 값은 %f입니다.\n");
}