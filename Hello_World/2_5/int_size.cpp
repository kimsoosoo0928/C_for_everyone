#include <stdio.h>

int main() {
	int a, b, c, d;

	a = 2147483647;
	b = 2147483648;
	c = -2147483648;
	d = -2147483649;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
}