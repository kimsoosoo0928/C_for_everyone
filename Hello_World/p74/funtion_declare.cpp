#include <stdio.h>

double abc(int x, int y)
{
	return x + y + 3.14;
}

main() {
	int x, y;
	double z;

	printf("���� x�� �� �Է� : ");
	scanf("%d", &x);
	printf("���� y�� �� �Է� : ");
	scanf("%d", &y);

	z = abc(x, y);
	printf("z�� ����: %f\n", z);

}