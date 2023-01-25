#include "Enemy.h"

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Melee,
	&Enemy::Gun,
	&Enemy::Leave
};
//�X�V
void Enemy::Update() {
	//�֐��|�C���^���Ăяo��
	(this->*spFuncTable[static_cast<size_t>(phase)])();
	//��Ԃ�\��
	if (phase == 0) {
		printf("�ߐ�\n");
	}
	else if(phase == 1) {
		printf("�e\n");
	}
	else {
		printf("���E\n");
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