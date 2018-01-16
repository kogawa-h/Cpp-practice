#include "data.h"

void CData::init()
{
	number = 0;
	comment = "";
}
int  CData::getNumber()
{
	return number;
}
string CData::getComment()
{
	return comment;
}
void  CData::setNumber(int a)
{
	number = a;
	return ;
}
void  CData::setComment(string b)
{
	comment = b;
	return ;
}