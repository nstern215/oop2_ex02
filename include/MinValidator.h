#pragma once
#include "BaseValidator.h"

template<class T>
class MinValidator : public BaseValidator
{
public:
	MinValidator(T min);
private:
	T m_min;
};
