#include "BaseField.h"

BaseField::BaseField() :
	m_isValid(false)
{}

void BaseField::addValidator(BaseFieldValidator* validator)
{
	m_validators.push_back(validator);
}

void BaseField::setIsValid(bool isValid)
{
	m_isValid = isValid;
}

void BaseField::setErrMsg(std::string errMsg)
{
	m_errMsg = errMsg;
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