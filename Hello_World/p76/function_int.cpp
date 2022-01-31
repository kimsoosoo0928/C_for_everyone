#include <stdio.h>

int test1(void);

main() {
	int result;
	result = test1();

	printf("test1 함수로부터 돌려받은 값은 %d\n", result);

}

int test1(void) {
	return 10;
}