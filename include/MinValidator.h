#pragma once
#include "BaseFieldValidator.h"

template<class T>
class MinValidator : public BaseFieldValidator
{
public:
	MinValidator(T min): m_min(min){};
	
	bool validate();

	

private:
	T m_data;
	T m_min;
};


template <class T>
bool MinValidator<T>::validate() {

	if (m_data >= m_min)
		return true;
	else
		return false;
}
//
//template <class T>
//bool MinValidator<T>::operator>(const MinValidator<T>& other) {
//	return (m_data > other.m_data);
//}
//
//template <>
//bool MinValidator<char*>::operator>(const MinValidator<char*>& other) {
//	return (strcmp(m_data, other.m_data) > 0);
//}