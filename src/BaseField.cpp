#include "BaseField.h"

BaseField::~BaseField()
{
	
}


void BaseField::addValidator(BaseValidator* validator)
{
	m_validators.push_back(validator);
}

std::string BaseField::getFieldTitle() const
{
	return m_fieldTitle;
}

std::ostream& operator<<(std::ostream& os, const BaseField& other)
{
	os << other.getFieldTitle();
	return os;
}