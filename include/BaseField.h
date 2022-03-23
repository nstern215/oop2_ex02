#pragma once
#include <ostream>
#include <vector>


#include "BaseValidator.h"

class BaseField
{
public:
	virtual std::string getFieldTitle() const = 0;
	virtual void addValidator(BaseValidator* validator);
protected:
	std::vector<BaseValidator*> m_validators;
};

std::ostream& operator<<(std::ostream& os, const BaseField& other);
