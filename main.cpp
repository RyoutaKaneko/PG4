#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <iostream>
#include <functional>

int main(void) {

	int number = 0;
	int waitTime = 3;

	srand(time(nullptr));
	int dice = rand() % 6 + 1;

	//�\�z�����
	printf("����Ǝv������1���A�������Ǝv������0����͂��Ă�������\n");
	scanf_s("[ %d ]", &number);

	// ���I�J�n
	std::function<void()> diceDrawing = [=]() {(dice % 2 == number) ? printf("������\n") : printf("�͂���\n"); };

	// �҂����Ԋ֐�
	std::function<void(std::function<void()>, int)> SetTimeout = [](std::function<void()> fx, int waitTime) {
		Sleep(waitTime * 1000); fx();
	};

	SetTimeout(diceDrawing, waitTime);

	return 0;
}

