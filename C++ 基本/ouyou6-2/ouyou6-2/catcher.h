#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "BaseballPlayer.h"

class Catcher : public BaseballPlayer {
public:
	//  �R���X�g���N�^
Catcher(string name, int number);
	//  ��肪�v���C����
	void play();
};

#endif 