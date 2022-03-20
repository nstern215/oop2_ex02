#include "Form.h"

template <typename T>
void Form::addField(Field<T>* field)
{
	m_fields.push_back(field);
}

bool Form::validateForm()
{
	return false;
}

std::ostream& Form::print(std::ostream& os)
{
	for (const auto& field : m_fields)
		os << field;
}
