#pragma once
#include <iostream>
#include <string>

#include "BaseValidator.h"

template<class T>
class RangeValidator{
public:

	RangeValidator(T min, T max):m_min(min), m_max(max){}

	bool operator>();
	bool operator<();

	bool validate();

private:
	T m_data;
	T m_min;
	T m_max;
};

template <class T>
bool RangeValidator<T>::validate() {

	if ((m_data >= m_min) && (m_data <= m_max))
		return true;
	else
		return false;
}

template <class T>
bool RangeValidator<T>::operator>(const RangeValidator<T>& other) {
	return (m_data > other.m_data);
}

template <>
bool RangeValidator<char*>::operator>(const RangeValidator<char*>& other) {
	return (strcmp(m_data, other.m_data) > 0);
}

template <class T>
bool RangeValidator<T>::operator<(const RangeValidator<T>& other) {
	return (m_data < other.m_data);
}

template <>
bool RangeValidator<char*>::operator<(const RangeValidator<char*>& other) {
	return (strcmp(m_data, other.m_data) > 0);
}



