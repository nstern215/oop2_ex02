#pragma once
#include <vector>

#include "Field.h"

class Form
{
public:
	template<typename T>
	void addField(Field<T>* field);
	void fillForm();

	bool validateForm();
	std::ostream& print(std::ostream& os);
private:
	std::vector<BaseField*> m_fields;
};

std::ostream& operator<<(std::ostream& os, const Form& other);