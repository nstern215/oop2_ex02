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

	bool validateForm();
	std::ostream& print(std::ostream& os) const;
private:
	std::vector<BaseField*> m_fields;
	std::vector<BaseFormValidator*> m_validators;
};

std::ostream& operator<<(std::ostream& os, const Form& other);