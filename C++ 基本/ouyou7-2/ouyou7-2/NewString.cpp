#include<boost/algorithm/string.hpp>
#include<string>
#include"NewString.h"

NewString::NewString(void) :m_value("")
{
}

NewString::NewString(std::string value) :m_value(value)
{
}

NewString::NewString(const NewString &value) :m_value(value.getValue())
{
}
NewString &NewString::operator=(const NewString &n)
{
	m_value = n.getValue();
	return *this;
}
std::string NewString::getValue(void)const
{
	return m_value;
}

bool operator==(const NewString &newString1, const NewString &newString2)
{
	return boost::iequals(newString1.getValue(), newString2.getValue());
}