#pragma once
#include "BaseFieldValidator.h"

#include <string>

class NoDigitValidator : public BaseFieldValidator
{
public:

	bool validate(void* value) override;

private:

	std::string m_name;
};
