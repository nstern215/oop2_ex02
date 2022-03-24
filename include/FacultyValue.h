#pragma once
#include <string>

class FacultyValue
{
public:
	FacultyValue(int value = 0);
	void setValue(int value);
	std::string toString() const;
private:
	int m_value;
};

std::ostream& operator<<(std::ostream& os, const FacultyValue& other);
std::istream& operator>>(std::istream& is, FacultyValue& other);