#include "Calculation.h"

void Calculation::setNumber1(int n1)
{
	m_number1 = n1;
	return;
}

void Calculation::setNumber2(int n2) {
	m_number2 = n2;
	return;
}
int Calculation::getNumber1() {
	return m_number1;
	}
int Calculation::getNumber2() {
	return m_number2;
	}
int Calculation::add() {
	return m_number1 + m_number2;
	}

int Calculation::sub() {
	return m_number1 - m_number2;
	}