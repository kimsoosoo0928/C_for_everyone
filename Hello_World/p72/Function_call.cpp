#include <stdio.h>

int sum(int x, int y);

int main() {
	int x = 10, y = 20;
	int result;

	result = sum(x, y);
	printf("%d + %d = %d\n", x, y, result);
}

int sum(int x, int y) {
	return x + y;
}