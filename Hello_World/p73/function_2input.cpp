#include <stdio.h>

double abc(int x, int y);

int main() {
	int x, y;
	double z;

	printf("���� x�� �� �Է�: ");
	scanf("%d", &x);

	printf("���� x�� y �Է�: ");
	scanf("%d", &y);

	z = abc(x, y);
	printf("z�� ���� : %f\n", z);

}
	double abc(int x, int y)
	{
		return x + y + 3.14;
	}