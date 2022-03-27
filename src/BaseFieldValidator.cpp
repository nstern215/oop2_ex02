#include "BaseFieldValidator.h"

bool BaseFieldValidator::operator()(void* value)
{
	return validate(value);
}