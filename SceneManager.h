#pragma once
#include <stdio.h>

class SceneManager {
	//�C���X�^���X
private:
	SceneManager();

public:
	void SceneChange(int& sceneNo_);

	static SceneManager* GetInstance();

//�����o�ϐ�
private:
	int waitTime;
};
