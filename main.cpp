#include "Enemy.h"
int Enemy::enemyCount;

int main() {
	//敵を5体用意
	Enemy* enemys[5];
	for (int i = 0; i < 5; i++) {
		enemys[i] = new Enemy;
	}
	//敵の数を表示
	printf("敵の総数は:%d\n", Enemy::enemyCount);

	//1人倒す
	enemys[3]->isAlive = false;

	//一人倒されていたら全員倒す
	for (int i = 0; i < 5; i++) {
		if (enemys[i]->isAlive == false) {
			for (int i = 0; i < 5; i++) {
				delete enemys[i];
			}
		}
	}
	//敵の数を表示
	printf("敵の総数は:%d\n", Enemy::enemyCount);

	return 0;
}