#include "Enemy.h"
int Enemy::enemyCount;

int main() {
	//“G‚ğ5‘Ì—pˆÓ
	Enemy* enemys[5];
	for (int i = 0; i < 5; i++) {
		enemys[i] = new Enemy;
	}
	//“G‚Ì”‚ğ•\¦
	printf("“G‚Ì‘”‚Í:%d\n", Enemy::enemyCount);

	//1l“|‚·
	enemys[3]->isAlive = false;

	//ˆêl“|‚³‚ê‚Ä‚¢‚½‚ç‘Sˆõ“|‚·
	for (int i = 0; i < 5; i++) {
		if (enemys[i]->isAlive == false) {
			for (int i = 0; i < 5; i++) {
				delete enemys[i];
			}
		}
	}
	//“G‚Ì”‚ğ•\¦
	printf("“G‚Ì‘”‚Í:%d\n", Enemy::enemyCount);

	return 0;
}