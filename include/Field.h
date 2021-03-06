#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "BaseField.h"
#include "BaseFieldValidator.h"

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
	os << m_fieldTitle << " = " << m_value;
	if (!m_isValid)
		os << "\t" << m_errMsg;
}

template<class T>
void Field<T>::fillField()
{
	m_isValid = true;

	std::cout << m_fieldTitle << "\n";
	std::cin >> m_value;

	for (const auto& validator : m_validators)
	{
		m_isValid = (*validator)(&m_value);
		if (!m_isValid)
			m_errMsg = validator->getErrorMessage();
	}
}