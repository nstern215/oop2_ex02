#pragma once

#include "BaseFieldValidator.h"

class IDValidator : public BaseFieldValidator
{
public:
	std::string getErrorMessage() override;
	bool validate(void* value) override;

private:
	std::string m_errMsg = "Wrong control digit";
};
