#include "SceneManager.h"

//�R���X�g���N�^
SceneManager::SceneManager() {
	waitTime = 0;
}
//�C���X�^���X���擾
SceneManager* SceneManager::GetInstance() {
	static SceneManager instance;

	return &instance;
}
//�V�[���`�F���W�֐�
void SceneManager::SceneChange(int& sceneNo_) {
	//1�b���ƂɃV�[���`�F���W
	if (waitTime == 2) {
		if (sceneNo_ < 3) {
			sceneNo_++;
		}
		else if(sceneNo_ >= 3) {
			sceneNo_ = 0;
		}
		waitTime = 0;
		printf("%d\n", sceneNo_);
	}
	waitTime++;
}