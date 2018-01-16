#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H

#include <iostream>
#include <string>
#include"airplane.h"
using namespace std;
//  戦闘機クラス
class FighterAiracraft :public Airplane{
public:
	//  コンストラクタ
	FighterAiracraft();
	//  飛行する
	void fly();
	//  戦闘する
	void fight();
};

#endif // _FIGHTERAIRCRAFT_H_