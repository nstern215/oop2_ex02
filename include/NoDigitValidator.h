#pragma once
#include "BaseValidator.h"

#include <string>

class NoDigitValidator : public BaseValidator
{
public:
	
	NoDigitValidator(std::string name) : m_name(name){}

	bool validateName();

private:

	std::string m_name;
};
