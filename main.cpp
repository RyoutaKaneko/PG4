#include "SceneManager.h"

int main() {
	//�C���X�^���X���擾
	SceneManager* sceneManager = SceneManager::GetInstance();
	int sceneNo = 0;
	//�����V�[���ؑ�
	while (true) {
		sceneManager->SceneChange(sceneNo);
	}
	
	return 0;
}