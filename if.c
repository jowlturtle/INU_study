#include <stdio.h>
#include <stdlib.h>

int main() {
	int user;
	int computer;

	printf("가위,바위,보 게임에 오신 것을 환영합니다");
	printf("하나를 선택하시오(가위-0, 바위-1, 보-2)");
	scanf("%d", &user);

	computer = rand() % 3;

    printf("사용자 = %d", user);
	printf("컴퓨터 = %d", computer);

	if (computer == user) { //(user + 1) % 3 으로 표현 == computer//
		printf("비겼습니다");
	}
	else if (computer <= user) {
		printf("사용자가 이겼습니다");
	}
	else printf("컴퓨터가 이겼습니다");

	return 0;
}