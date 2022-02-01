#include <stdio.h>

main() {

	int room1 = 0;
	int room2 = 0;
	int room3 = 0;
	int room4 = 0;
	int room5 = 0;
	int room6 = 0;
	int room7 = 0;
	int room8 = 0;

	room2 = room7 = 1;

	if (room1 == 1)
		printf("1번 방의 불은 on 입니다.\n");
	else
		printf("1번 방의 불은 off 입니다.\n");

	if (room2 == 1)
		printf("2번 방의 불은 on 입니다.\n");
	else
		printf("2번 방의 불은 off 입니다.\n");

	if (room7 == 1)
		printf("7번 방의 불은 on 입니다.\n");
	else
		printf("7번 방의 불은 off 입니다.\n");
}