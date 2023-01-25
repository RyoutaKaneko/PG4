#pragma once
#include <stdio.h>

class SceneManager final{
	//�C���X�^���X
private:
	SceneManager();

public:
	void SceneChange(int& sceneNo_);

	static SceneManager* GetInstance();

	SceneManager(const SceneManager& obj) = delete;

	SceneManager& operator=(const SceneManager& obj) = delete;
//�����o�ϐ�
private:
	int waitTime;
};
