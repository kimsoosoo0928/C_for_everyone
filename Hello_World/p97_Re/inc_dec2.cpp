#include <stdio.h>

main() {
	int a = 1, b;

	b = ++a;

	printf("a의 값은 %d\n", a);
	printf("b의 값은 %d\n", b);
	printf("\n");
	
	a = 1;
	b = a++;
	printf("a의 값은 %d\n", a);
	printf("b의 값은 %d\n", b);
}