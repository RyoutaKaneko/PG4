#pragma once
#include <stdio.h>

class Enemy {
public:
	static int enemyCount;
	Enemy() { enemyCount++; }
	~Enemy() { enemyCount--; }
	//�����t���O
	bool isAlive = true;
};