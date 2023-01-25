#pragma once
#include <stdio.h>

class SceneManager {
	//インスタンス
private:
	SceneManager();

public:
	void SceneChange(int& sceneNo_);

	static SceneManager* GetInstance();

//メンバ変数
private:
	int waitTime;
};
