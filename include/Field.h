#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "BaseField.h"
#include "BaseValidator.h"

template<class T>
class Field : public BaseField
{
public:
	Field(std::string title)
	{
		m_fieldTitle = title;
	}

	void print(std::ostream& os) const override;
	
	void fillField() override;

	T getValue() const;
	

private:
	T m_value;
};

template<class T>
T Field<T>::getValue() const
{
	return m_value;
}

template<class T>
void Field<T>::print(std::ostream& os) const
{
	os << m_fieldTitle << " = " << m_value << "\n";
	/*if (!m_isValid)
		print error message*/
}

template<class T>
void Field<T>::fillField()
{
	std::cout << m_fieldTitle << "\n";
	std::cin >> m_value;
}