#pragma once
#include <stdio.h>

class Enemy {
public:
	static int enemyCount;
	Enemy() { enemyCount++; }
	~Enemy() { enemyCount--; }
	//生存フラグ
	bool isAlive = true;
};