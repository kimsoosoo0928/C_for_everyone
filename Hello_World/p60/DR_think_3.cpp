#include <stdio.h>

int main() {
	double f_a;
	double f_b;
	double ratio;

	f_a = 10.5 * 8.4;
	f_b = 12.2 * 6.3;

	ratio = f_a / f_b;

	printf("a 포탄의 힘은 %f b포탄의 힘은 %f입니다.\n", f_a, f_b);
	printf("a 포탄이 b포탄보다 %f배 더 셉니다.\n", ratio)
}