#include <stdio.h>

main() {
	int a = 1;
	int b = 2;
	
	a = a + b;

	printf("a의 값은 %d, b의 값은 %d\n", a, b);

	a *= b;
	b *= 10;

	printf("a의 값은 %d, b의 값은 %d\n, a, b");
	
}