#include <stdio.h>
#include <stdlib.h>

int main() {
	int user;
	int computer;

	printf("����,����,�� ���ӿ� ���� ���� ȯ���մϴ�");
	printf("�ϳ��� �����Ͻÿ�(����-0, ����-1, ��-2)");
	scanf("%d", &user);

	computer = rand() % 3;

    printf("����� = %d", user);
	printf("��ǻ�� = %d", computer);

	if (computer == user) { //(user + 1) % 3 ���� ǥ�� == computer//
		printf("�����ϴ�");
	}
	else if (computer <= user) {
		printf("����ڰ� �̰���ϴ�");
	}
	else printf("��ǻ�Ͱ� �̰���ϴ�");

	return 0;
}