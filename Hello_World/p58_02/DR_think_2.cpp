#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int temp;

	printf("a�� ���� % d�̰�, b�� ���� % d�Դϴ�.\n",a,b);

	temp = a;
	a = b;
	b = temp;

	printf("a�� ���� % d�̰�, b�� ���� % d�Դϴ�.\n", a, b);
}