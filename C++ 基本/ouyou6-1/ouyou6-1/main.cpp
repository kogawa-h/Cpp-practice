#include <iostream>
#include "fighteraircraft.h"
#include "passengerplane.h"

using namespace std;

int main() {
	//  �퓬�@�N���X�̃C���X�^���X�̐���
	FighterAiracraft* fighter = new FighterAiracraft();
	PassengerPlane* airlinear = new PassengerPlane();
	//  �퓬�@�N���X�̏���
	fighter->fly();                  //  ��s����
	fighter->fight();                //  �퓬����
									 //  ���q�@�N���X�̏���
	airlinear->fly();                //  ��s����
	airlinear->carryPassengers();    //  ��q���^��
									 //  delete����
	delete fighter;
	delete airlinear;
	return 0;
}