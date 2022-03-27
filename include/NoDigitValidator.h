#pragma once
#include "BaseFieldValidator.h"

#include <string>

class NoDigitValidator : public BaseFieldValidator
{
public:
	std::string getErrorMessage() override;
	bool validate(void* value) override;

private:
	std::string m_errMsg = "Can't contain digits";
};
