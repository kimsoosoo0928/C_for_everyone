#include <stdio.h>

void bell();

main() {
	bell();
	bell();
	bell();
}

void bell() {
	int order = 0;

	order++;
	printf("���� �ֹ� ��ȣ�� %d�Դϴ�.\n", order);
}