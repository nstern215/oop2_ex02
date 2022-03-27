#include "FacultyValue.h"


#include <istream>
#include <string>

FacultyValue::FacultyValue(int value):
	m_value(value) {}

void FacultyValue::setValue(int value)
{
	m_value = value;
}

FacultyValue::operator std::string() const
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

int FacultyValue::getValue() const
{
	return m_value;
}

bool FacultyValue::operator==(const FacultyValue& other)
{
	return m_value == other.getValue();
}

bool FacultyValue::operator<(const FacultyValue& other)
{
	return m_value < other.getValue();
}

bool FacultyValue::operator==(const FacultyValue& other) const
{
	return m_value == other.getValue();
}

bool FacultyValue::operator<(const FacultyValue& other) const
{
	return m_value < other.getValue();
}

bool FacultyValue::operator>(const FacultyValue& other) const
{
	return m_value > other.getValue();
}

FacultyValue::operator int() const
{
	return m_value;
}

bool operator<=(const FacultyValue& a, const FacultyValue& b)
{
	return a < b || a == b;
}

bool operator>=(const FacultyValue& a, const FacultyValue& b)
{
	return a > b || a == b;
}

std::ostream& operator<<(std::ostream& os, const FacultyValue& other)
{
	os << std::to_string(other);
	return os;
}

std::istream& operator>>(std::istream& is, FacultyValue& other)
{
	int value;
	is >> value;
	other.setValue(value);

	return is;
}