#include<iostream>
#include<string>
#include "fighteraircraft.h"

//  �R���X�g���N�^
FighterAiracraft::FighterAiracraft()
{
	m_type = "�퓬�@";
}
//  ��s����
void FighterAiracraft::fly()
{
	cout << "�U���ɏo�邽�߂ɔ�s" << endl;
}
//  �퓬����
void FighterAiracraft::fight()
{
	cout << "�퓬���܂�" << endl;
}