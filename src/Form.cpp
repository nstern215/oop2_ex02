#include "Form.h"

void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
}

bool Form::validateForm() const
{
	/*for (const auto& field : m_fields)
		field->validate()*/


	for (const auto& field : m_fields)
		if (!field->isValid())
			return false;

	return true;
}

void Form::addValidator(BaseFormValidator* validator)
{
	m_validators.push_back(validator);
}

void Form::fillForm()
{
	for (const auto& field : m_fields)
		if (!field->isValid())
			field->fillField();
}


std::ostream& Form::print(std::ostream& os) const
{
	for (const auto& field : m_fields)
	{
		os << std::string(60, '-') << "\n";
		os << *field << "\n";
		os << std::string(60, '-') << "\n";
	}

	return os;
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
	other.print(os);
	return os;
}