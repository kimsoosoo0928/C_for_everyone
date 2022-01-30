#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int temp;

	printf("a의 값은 % d이고, b의 값은 % d입니다.\n",a,b);

	temp = a;
	a = b;
	b = temp;

	printf("a의 값은 % d이고, b의 값은 % d입니다.\n", a, b);
}