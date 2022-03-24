#pragma once
#include "BaseValidator.h"

template<class T>
class RangeValidator : public BaseValidator
{
public:
	RangeValidator(T min, T max): m_min(min), m_max(max){};
private:
	T m_min;
	T m_max;
};
