#include "SceneManager.h"

//コンストラクタ
SceneManager::SceneManager() {
	waitTime = 0;
}
//インスタンスを取得
SceneManager* SceneManager::GetInstance() {
	static SceneManager instance;

	return &instance;
}
//シーンチェンジ関数
void SceneManager::SceneChange(int& sceneNo_) {
	//1秒ごとにシーンチェンジ
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