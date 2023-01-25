#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Melee,
	&Enemy::Gun,
	&Enemy::Leave
};
//更新
void Enemy::Update() {
	//関数ポインタを呼び出し
	(this->*spFuncTable[static_cast<size_t>(phase)])();
	//状態を表示
	if (phase == 0) {
		printf("近接\n");
	}
	else if(phase == 1) {
		printf("銃\n");
	}
	else {
		printf("離脱\n");
	}
	printf("\n");
}

void Enemy::Melee() {
	phase = 1;
}

void Enemy::Gun() {
	phase = 2;
}

void Enemy::Leave() {
	phase = 0;
}