#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "BaseballPlayer.h"

class Catcher : public BaseballPlayer {
public:
	//  コンストラクタ
Catcher(string name, int number);
	//  野手がプレイする
	void play();
};

#endif 