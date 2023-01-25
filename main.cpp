#include "stdio.h"
#include <list>

int main() {
//山手線(1970)
	std::list<const char*> stations = {"tokyo","kanda","akihabara","okachimachi","ueno","uguisudani",
		"nippori","tabata","komagome","sugamo","ootuka","ikebukuro","meziro","takadanobaba",
		"shinookubo","shinjuku","yoyogi","harajuku","shibuya","ebisu","meguro","gotanda",
		"oosaki","shinagawa","tamachi","hamamatuchou","shinbashi","yuurakuchou"
	};
	//イテレーター
	std::list<const char*>::iterator itr;

	//最初の値を参照
	itr = stations.begin();
	//1970ver
	for (int i = 0; i < stations.size(); i++) {
		printf("%s\n", *itr);
		itr++;
	}
	printf("\n///////////////////////////\n");

	/////1971年西日暮里駅追加
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); itr++) {
		if (*itr == "tabata") {
			itr = stations.insert(itr, "nishinippori");
			itr++;
		}
	}

	//最初の値を参照
	itr = stations.begin();
	//2019ver
	for (int i = 0; i < stations.size(); i++) {
		printf("%s\n", *itr);
		itr++;
	}
	printf("\n///////////////////////////\n");
	
	/////2020年高輪ゲートウェイ駅追加
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); itr++) {
		if (*itr == "tamachi") {
			itr = stations.insert(itr, "takawage-toway");
			itr++;
		}
	}

	//最初の値を参照
	itr = stations.begin();
	//2022ver
	for (int i = 0; i < stations.size(); i++) {
		printf("%s\n", *itr);
		itr++;
	}

	return 0;
}

