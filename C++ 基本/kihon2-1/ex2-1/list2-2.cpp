#include <iostream>
#include "sample.h"

using namespace std;

int main() {
	CSample obj1, obj2;//CSample�̃C���X�^���X�𕡐�����

	obj1.set(1);//obj1��set���\�b�h�Ăяo��
	obj2.set(2);//obj1��set���\�b�h�Ăяo��

	cout << obj1.get() << endl;//obj1�̃����o�ϐ��̒l���o��
	cout << obj2.get() << endl;//obj2�̃����o�ϐ��̒l���o��

	return 0;
}