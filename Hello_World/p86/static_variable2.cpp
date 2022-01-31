#include <stdio.h>

void bell();

main() {
	bell();
	bell();
	bell();
}

void bell() {
	static int order = 0;
	order++;
	printf("현재 주 문 번호는 %d입니다.\n", order)
}