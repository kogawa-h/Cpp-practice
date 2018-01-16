#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class BaseballPlayer {
protected:
	//  �w�ԍ�
	int m_number;
	//  �v���C���[�̎��
	string m_kind;
	//  ���O
	string m_name;
public:
	//  ���O�̎擾
	int getNumber();
	//  ��ނ̎擾
	string getKind();
	//  ���O�̎擾
	string getName();
	//  �v���C�i�������֐�)
	virtual void play() = 0;
};

#endif // _BASEBALLPLAYER_H_