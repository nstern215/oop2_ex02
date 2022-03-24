#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "BaseField.h"
#include "BaseValidator.h"

template<typename T>
class Field : public BaseField
{
public:
	Field(std::string title)
	{
		m_fieldTitle = title;
	}

	~Field()
	{}

	void fillField() override
	{
		std::cin >> m_value;
	}
	
	//std::string getFieldTitle() const override;
private:
	T m_value;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Field<T>& other)
{
	os << other.getFieldTitle();
	return os;
}

