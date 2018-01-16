#include "twostrings.h"


void TwoStrings::setString1(string s) {
	m_string1 = s;
	return;
}

void TwoStrings::setString2(string s) {
	m_string2 = s;
	return;
}

string TwoStrings::getString1(void) {
	return m_string1;
}

string TwoStrings::getString2(void) {
	return m_string2;
}

string TwoStrings::getConnectedString(void) {
	return m_string1 + m_string2;
}

int TwoStrings::getConnectedLength(void)
{
	return getConnectedString().length();
}