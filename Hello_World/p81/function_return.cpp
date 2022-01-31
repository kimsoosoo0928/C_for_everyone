#include <stdio.h>

int function1() {
	return 1;
}

char function2() {
	return 'A';
}

int function3() {
	int x = 1;
	return x;
}

double function4() {
	double x = 1.2, y = 3.5;
	return x + y;
}

main() {
	printf(" % d\n", function1());
	printf(" % c\n", function2());
	printf(" % d\n", function3());
	printf(" % f\n", function4());
}
