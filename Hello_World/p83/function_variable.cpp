#include <stdio.h>

void abc(int a, int b) {
	a = a * 10;
	b = b * 10;
}

main() {
	int a;
	int b;

	a = 1;
	b = 2;

	abc(a, b);

	printf("a의 값은 %d이고 b의 값은 %d입니다.\n", a, b);

		
}