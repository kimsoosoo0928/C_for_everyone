#include <stdio.h>

main() {
	int a, b;

	printf("�� ���� ���� �ٸ� ������ �Է��ϼ���:\n");
	printf("a =");
	scanf("%d", &a);
	printf("b =");
	scanf("%d", &b);

	printf("�Էµ� �� �� �� ū ���� %d�Դϴ�.\n", a > b ? a : b);
}