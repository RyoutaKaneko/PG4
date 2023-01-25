#pragma once
#include <stdio.h>

class Enemy {
public:
	static int enemyCount;
	Enemy() { enemyCount++; }
	~Enemy() { enemyCount--; }
	//¶‘¶ƒtƒ‰ƒO
	bool isAlive = true;
};