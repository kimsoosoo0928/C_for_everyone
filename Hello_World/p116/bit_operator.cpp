#include <stdio.h>

main() {
	int a = 178;
	int b = 104;
	int c = 10;

	printf("%d & %d = %d\n", a, b, a & b);
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d\n", a, b, a ^ b);
	printf("c = %d, ~c = %d\n", c, ~c);
}