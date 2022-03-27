#pragma once

#include "BaseFieldValidator.h"

class IDValidator : public BaseFieldValidator
{
public:

	bool validate(void* value) override;

};
