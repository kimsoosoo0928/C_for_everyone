#include <stdio.h>

main() {
	char room = 0;
	int i, j;

	printf("2�� ��� 7�� ���� ���� on�մϴ�.\n\n");

	room |= 2;
	room |= 64;

	if (room & 1)
		printf("1�� ���� on �Դϴ�.\n");
	else
		printf("1�� ���� off �Դϴ�.\n");

	if (room & 2)
		printf("2�� ���� on �Դϴ�.\n");
	else
		printf("2�� ���� off �Դϴ�.\n");

	if (room & 64)
		printf("7�� ���� on �Դϴ�.\n");
	else
		printf("7�� ���� off �Դϴ�.\n");
	printf("\n");

	printf("2�� ���� ���� ���ڽ��ϴ�\n");
	room &= -2;

	if (room & 2)
		printf("2�� ���� on �Դϴ�.\n");
	else
		printf("2�� ���� off �Դϴ�.\n");
	printf("\n");
	printf("1�� ���� ���� �ִٸ� ���� ���� �ִٸ� �Ѱڽ��ϴ�.\n");

	room ^= 1;

	if (room & 1)
		printf("1�� ���� on �Դϴ�.\n");
	else
		printf("1�� ���� off �Դϴ�.\n");
	printf("\n");

	printf("���� ��� ���� ���� ���¸� Ȯ���ϰڽ��ϴ�!\n");

	for (i = 1, j = 1; i <= 128; i = i * 2, j++) {
		if (room & i)
			printf("%d�� ���� on�Դϴ�.\n", j);
		else
			printf("%d�� ���� off �Դϴ�.\n", j);
	}
}
			
		
			