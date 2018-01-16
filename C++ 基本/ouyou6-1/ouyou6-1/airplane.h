#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_
#include<string>
using namespace std;
class Airplane
{
protected:
	string m_type;
public:
	string getType();
	virtual void fly() = 0;
};
#endif 