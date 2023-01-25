#include "SceneManager.h"

int main() {
	//インスタンスを取得
	SceneManager* sceneManager = SceneManager::GetInstance();
	int sceneNo = 0;
	//無限シーン切替
	while (true) {
		sceneManager->SceneChange(sceneNo);
	}
	
	return 0;
}