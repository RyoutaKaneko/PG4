#include "stdio.h"
#include <list>

int main() {
//�R���(1970)
	std::list<const char*> stations = {"tokyo","kanda","akihabara","okachimachi","ueno","uguisudani",
		"nippori","tabata","komagome","sugamo","ootuka","ikebukuro","meziro","takadanobaba",
		"shinookubo","shinjuku","yoyogi","harajuku","shibuya","ebisu","meguro","gotanda",
		"oosaki","shinagawa","tamachi","hamamatuchou","shinbashi","yuurakuchou"
	};
	//�C�e���[�^�[
	std::list<const char*>::iterator itr;

	//�ŏ��̒l���Q��
	itr = stations.begin();
	//1970ver
	for (int i = 0; i < stations.size(); i++) {
		printf("%s\n", *itr);
		itr++;
	}
	printf("\n///////////////////////////\n");

	/////1971�N�����闢�w�ǉ�
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); itr++) {
		if (*itr == "tabata") {
			itr = stations.insert(itr, "nishinippori");
			itr++;
		}
	}

	//�ŏ��̒l���Q��
	itr = stations.begin();
	//2019ver
	for (int i = 0; i < stations.size(); i++) {
		printf("%s\n", *itr);
		itr++;
	}
	printf("\n///////////////////////////\n");
	
	/////2020�N���փQ�[�g�E�F�C�w�ǉ�
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); itr++) {
		if (*itr == "tamachi") {
			itr = stations.insert(itr, "takawage-toway");
			itr++;
		}
	}

	//�ŏ��̒l���Q��
	itr = stations.begin();
	//2022ver
	for (int i = 0; i < stations.size(); i++) {
		printf("%s\n", *itr);
		itr++;
	}

	return 0;
}

