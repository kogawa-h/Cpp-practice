#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

#include <iostream>
#include <string>

using namespace std;

class Calculation {
private:
	int m_number1;
	int m_number2;
public:
	void setNumber1(int n1);	
	void setNumber2(int n2);
	int getNumber1();
	int getNumber2();
	int add();
	int sub();
};

#endif