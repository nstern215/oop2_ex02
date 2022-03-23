#include "BaseField.h"

void BaseField::addValidator(BaseValidator* validator)
{
	m_validators.push_back(validator);
}

std::ostream& operator<<(std::ostream& os, const BaseField& other)
{
	os << other.getFieldTitle();
	return os;
}