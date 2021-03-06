#include "Form.h"

void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
}

bool Form::validateForm() const
{
	bool isValid = true;
	
	for (const auto& field : m_fields)
		if (!field->isValid())
			isValid = false;

	for (const auto& validator : m_validators)
		if (!validator->validate())
			isValid = false;
	
	return isValid;
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

	for (const auto& validator : m_validators)
		if (!validator->validate())
			os << validator->getErrMsg() << "\n";

	return os;
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
	other.print(os);
	return os;
}