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

	printf("func1() �Լ��� ���޹��� ���� %d�Դϴ�.\n", a);
	printf("func2() �Լ��� ���޹��� ���ڴ� %c�Դϴ�.\n", b);

	func3();

	printf("func4() �Լ��� ������ �Ǽ��� �Է��ϼ���: ");
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
	printf("main() �Լ��κ��� ���� �Ǽ� ���� %f�Դϴ�.\n");
}