#include "Enemy.h"
int Enemy::enemyCount;

int main() {
	//�G��5�̗p��
	Enemy* enemys[5];
	for (int i = 0; i < 5; i++) {
		enemys[i] = new Enemy;
	}
	//�G�̐���\��
	printf("�G�̑�����:%d\n", Enemy::enemyCount);

	//1�l�|��
	enemys[3]->isAlive = false;

	//��l�|����Ă�����S���|��
	for (int i = 0; i < 5; i++) {
		if (enemys[i]->isAlive == false) {
			for (int i = 0; i < 5; i++) {
				delete enemys[i];
			}
		}
	}
	//�G�̐���\��
	printf("�G�̑�����:%d\n", Enemy::enemyCount);

	return 0;
}