#include <stdio.h>

main() {
	int a = 5;
	int b = 3;
	int c = 2;

	printf("0 && 0 = %d\n", (a < b) && (b < c));
	printf("0 && 1 = %d\n", (a < b) && (b > c));
	printf("1 && 0 = %d\n", (a > b) && (b < c));
	printf("1 && 1 = %d\n", (a > b) && (b > c));

	printf("0 || 0 = %d\n", (a < b) || (b < c));
	printf("0 || 1 = %d\n", (a < b) || (b > c));
	printf("1 || 0 = %d\n", (a > b) || (b < c));
	printf("1 || 1 = %d\n", (a > b) || (b > c));

	printf("!0 = %d\n", !(5 < 3));
	printf("!1 = %d\n", !(5 > 3));
}