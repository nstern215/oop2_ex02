#pragma once
#include <vector>


#include "BaseFormValidator.h"
#include "Field.h"

class Form
{
public:
	void addField(BaseField* field);
	void fillForm();

	void addValidator(BaseFormValidator* validator);

	bool validateForm() const;
	std::ostream& print(std::ostream& os) const;
private:
	std::vector<BaseField*> m_fields;
	std::vector<BaseFormValidator*> m_validators;

	const std::string m_messageLine;
};

std::ostream& operator<<(std::ostream& os, const Form& other);