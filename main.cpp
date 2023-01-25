#include "Enemy.h"
int Enemy::enemyCount;

int main() {
	Enemy* enemy = new Enemy;
	int num = 0;

	while (num < 10) {
		enemy->Update();
		num++;
	}

	return 0;
}