#include <stdio.h>

main() {
	int a, b;

	printf("�� ���� ���� �ٸ� ������ �Է��ϼ���:\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	if (a > b)
		printf("�Էµ� �μ��� ū ���� %d�Դϴ�.\n", a);
	else
		printf("�Էµ� �� �� �� ū ���� %d�Դϴ�.\n", b);
}