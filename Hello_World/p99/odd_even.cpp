#include <stdio.h>
main() {
	int a;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &a);

	if (a % 2)
		printf("�Է��� ���� ������ Ȧ���Դϴ�.\n");
	else
		printf("�Է��� ���� ������ ¦���Դϴ�.\n");
}