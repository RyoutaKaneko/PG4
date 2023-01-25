#pragma once
#include <stdio.h>

class SceneManager final{
	//インスタンス
private:
	SceneManager();

public:
	void SceneChange(int& sceneNo_);

	static SceneManager* GetInstance();

	SceneManager(const SceneManager& obj) = delete;

	SceneManager& operator=(const SceneManager& obj) = delete;
//メンバ変数
private:
	int waitTime;
};
