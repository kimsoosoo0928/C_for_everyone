#include <stdio.h>

main() {
	int a = 1, b;

	b = ++a;

	printf("a�� ���� %d\n", a);
	printf("b�� ���� %d\n", b);
	printf("\n");
	
	a = 1;
	b = a++;
	printf("a�� ���� %d\n", a);
	printf("b�� ���� %d\n", b);
}