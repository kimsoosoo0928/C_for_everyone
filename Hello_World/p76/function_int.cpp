#include <stdio.h>

int test1(void);

main() {
	int result;
	result = test1();

	printf("test1 �Լ��κ��� �������� ���� %d\n", result);

}

int test1(void) {
	return 10;
}