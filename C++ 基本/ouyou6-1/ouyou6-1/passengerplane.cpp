#include<iostream>
#include<string>
#include "passengerplane.h"

//  �R���X�g���N�^
PassengerPlane::PassengerPlane()
{
	m_type = "���q�@";
}
//  ��s����
void PassengerPlane::fly()
{
	cout << "��q���悹�ĖړI�n�܂Ŕ�s���܂��B" << endl;
}
//  ��q���^��
void PassengerPlane::carryPassengers()
{
	cout << "��q��ړI�n�܂ŉ^�т܂�" << endl;
}