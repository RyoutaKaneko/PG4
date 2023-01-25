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
	//生存フラグ
	bool isAlive = true;

	//状態遷移
	int phase;
	void Melee();
	void Gun();
	void Leave();

	//更新
	void Update();
private:
	static void(Enemy::*spFuncTable[])();
};