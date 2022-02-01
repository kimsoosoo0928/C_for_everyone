#include <stdio.h>

main() {
	char room = 0;
	int i, j;

	printf("2번 방과 7번 방의 불을 on합니다.\n\n");

	room |= 2;
	room |= 64;

	if (room & 1)
		printf("1번 방은 on 입니다.\n");
	else
		printf("1번 방은 off 입니다.\n");

	if (room & 2)
		printf("2번 방은 on 입니다.\n");
	else
		printf("2번 방은 off 입니다.\n");

	if (room & 64)
		printf("7번 방은 on 입니다.\n");
	else
		printf("7번 방은 off 입니다.\n");
	printf("\n");

	printf("2번 방의 불을 끄겠습니다\n");
	room &= -2;

	if (room & 2)
		printf("2번 방은 on 입니다.\n");
	else
		printf("2번 방은 off 입니다.\n");
	printf("\n");
	printf("1번 방이 켜져 있다면 끄고 꺼져 있다면 켜겠습니다.\n");

	room ^= 1;

	if (room & 1)
		printf("1번 방은 on 입니다.\n");
	else
		printf("1번 방은 off 입니다.\n");
	printf("\n");

	printf("현재 모든 방의 점등 상태를 확인하겠습니다!\n");

	for (i = 1, j = 1; i <= 128; i = i * 2, j++) {
		if (room & i)
			printf("%d번 방은 on입니다.\n", j);
		else
			printf("%d번 방은 off 입니다.\n", j);
	}
}
			
		
			