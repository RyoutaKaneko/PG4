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

	//予想を入力
	printf("奇数だと思ったら1を、偶数だと思ったら0を入力してください\n");
	scanf_s("[ %d ]", &number);

	// 抽選開始
	std::function<void()> diceDrawing = [=]() {(dice % 2 == number) ? printf("あたり\n") : printf("はずれ\n"); };

	// 待ち時間関数
	std::function<void(std::function<void()>, int)> SetTimeout = [](std::function<void()> fx, int waitTime) {
		Sleep(waitTime * 1000); fx();
	};

	SetTimeout(diceDrawing, waitTime);

	return 0;
}

