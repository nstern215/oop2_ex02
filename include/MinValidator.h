#pragma once
#include "BaseValidator.h"

template<class T>
class MinValidator : public BaseValidator
{
public:
	MinValidator(T min): m_min(min){};
private:
	T m_min;
};
