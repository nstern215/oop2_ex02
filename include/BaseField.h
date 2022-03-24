#pragma once
#include <ostream>
#include <vector>


#include "BaseValidator.h"

class BaseField
{
public:
	virtual ~BaseField();
	std::string getFieldTitle() const;
	void addValidator(BaseValidator* validator);
	virtual void fillField() = 0;
protected:
	std::vector<BaseValidator*> m_validators;
	std::string m_fieldTitle;
};

std::ostream& operator<<(std::ostream& os, const BaseField& other);
