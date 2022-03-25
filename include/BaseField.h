#pragma once
#include <ostream>
#include <vector>


#include "BaseValidator.h"

class BaseField
{
public:
	BaseField();
	virtual ~BaseField() = default;
	std::string getFieldTitle() const;
	void addValidator(BaseValidator* validator);

	bool isValid() const;
	
	virtual void fillField() = 0;
	virtual void print(std::ostream& os) const = 0;
protected:
	std::vector<BaseValidator*> m_validators;
	std::string m_fieldTitle;
	bool m_isValid;
};

std::ostream& operator<<(std::ostream& os, const BaseField& other);
