#pragma once
#include <string>

class FacultyValue
{
public:
	FacultyValue(int value = 0);

	operator std::string() const;

	void setValue(int value);

	int getValue() const;

	operator int() const;
	
	bool operator==(const FacultyValue& other);
	bool operator<(const FacultyValue& other);

	bool operator==(const FacultyValue& other) const;
	bool operator<(const FacultyValue& other) const;
	bool operator>(const FacultyValue& other) const;
	
private:
	int m_value;
};

std::ostream& operator<<(std::ostream& os, const FacultyValue& other);
std::istream& operator>>(std::istream& is, FacultyValue& other);

bool operator<=(const FacultyValue& a, const FacultyValue& b);
bool operator>=(const FacultyValue& a, const FacultyValue& b);