#pragma once
#include "BaseValidator.h"

template<class T>
class RangeValidator : public BaseValidator
{
public:

	RangeValidator(T min, T max);


	bool operaor > (T& right);


	bool validate();

private:
	T m_data;
	T m_min;
	T m_max;
};










template <>
bool RangeValidator<char*>::operaor > (T& other) {
	return (strcmp(m_data, other.m_data) > 0);
}

template <class T>
bool RangeValidator<T>::operaor > (T& other) {
	return (m_data > other.m_data);
}

