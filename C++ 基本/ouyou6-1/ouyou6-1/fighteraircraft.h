#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H

#include <iostream>
#include <string>
#include"airplane.h"
using namespace std;
//  �퓬�@�N���X
class FighterAiracraft :public Airplane{
public:
	//  �R���X�g���N�^
	FighterAiracraft();
	//  ��s����
	void fly();
	//  �퓬����
	void fight();
};

#endif // _FIGHTERAIRCRAFT_H_