#include <stdio.h>

int a = 1;

void func1();

main()
{
	int b = 2;

	printf("����� main() �Լ��Դϴ�.\n");
	printf("main() �Լ����� a���� %d �Դϴ�.\n", a);
	printf("main() �Լ����� b���� %d �Դϴ�.\n", b);

	func1();

}

void func1()
{
	printf("����� func1 �Լ��Դϴ�.\n");
	printf("func1 �Լ����� a���� %d�Դϴ�.\n",a);
	//printf("func1 �Լ����� b���� %d�Դϴ�.\n",b);
}