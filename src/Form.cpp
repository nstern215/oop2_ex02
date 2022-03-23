#include "Form.h"


void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
}

bool Form::validateForm()
{
	return false;
}

void Form::addValidator(BaseFormValidator* validator)
{
	m_validators.push_back(validator);
}

void Form::fillForm()
{
	
}


std::ostream& Form::print(std::ostream& os) const
{
	for (const auto& field : m_fields)
		os << field;

	return os;
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
	other.print(os);
	return os;
}