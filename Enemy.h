#pragma once
#include <stdio.h>

class Enemy {
public:
	static int enemyCount;
	Enemy() { 
		enemyCount++;
		phase = 0;
	}
	~Enemy() { enemyCount--; }
	//�����t���O
	bool isAlive = true;

	//��ԑJ��
	int phase;
	void Melee();
	void Gun();
	void Leave();

	//�X�V
	void Update();
private:
	static void(Enemy::*spFuncTable[])();
};