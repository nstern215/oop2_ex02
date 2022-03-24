#include "BaseField.h"

BaseField::BaseField() :
	m_isValid(false)
{}

void BaseField::addValidator(BaseValidator* validator)
{
	m_validators.push_back(validator);
}

std::string BaseField::getFieldTitle() const
{
	return m_fieldTitle;
}

bool BaseField::isValid() const
{
	return m_isValid;
}

std::ostream& operator<<(std::ostream& os, const BaseField& other)
{
	other.print(os);
	return os;
}