#include "fielder.h"

Fielder::Fielder(string name, int number)
{
	m_name = name;
	m_number = number;
	m_kind = "野手";
}
//  ピッチャーがプレイする
void Fielder::play()
{
	cout << "球を受ける" << endl;
}