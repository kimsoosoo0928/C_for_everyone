#include <stdio.h>

int main() {
	int a, b, c;
	printf("���� �ٸ� ���� 3���� �Է��ϼ���:\n");

	printf("a = ");
	scanf("%d", &a);

	printf("b = ");
	scanf("%d", &b);

	printf("c = ");
	scanf("%d", &c);


	if ((a > b) && (a > c))
		printf("a�� b�� c���� ū ���̴�\n");
	else
		printf("a�� ��� b�� c�� �ϳ� ���ٴ� ����.\n");
	if ((b > a || (b > c)))
		printf("b�� ��� a�� c�� �ϳ� ���ٴ� ũ��.\n");
	else
		printf("b�� ���� ���� ���̴�.\n");
}