#include "FacultyValue.h"


#include <istream>
#include <string>

FacultyValue::FacultyValue(int value):
	m_value(value) {}

void FacultyValue::setValue(int value)
{
	m_value = value;
}

std::string FacultyValue::toString() const
{
	std::string str;

	switch (m_value)
	{
	case 1:
		str = "Computer Science";
		break;
	case 2:
		str = "Medicine";
		break;
	case 3:
		str = "Literature";
		break;
		default:
			str = std::to_string(m_value);
	}

	return str;
}

std::ostream& operator<<(std::ostream& os, const FacultyValue& other)
{
	os << other.toString();
	return os;
}

std::istream& operator>>(std::istream& is, FacultyValue& other)
{
	int value;
	is >> value;
	other.setValue(value);

	return is;
}