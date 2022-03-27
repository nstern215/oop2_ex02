#pragma once
#include <iostream>
#include <string>

#include "BaseFieldValidator.h"

template<class T>
class RangeValidator : public BaseFieldValidator {
public:

	RangeValidator(T min, T max) :m_min(min), m_max(max) {}

	bool operator>(const T& other);
	
	bool validate(void* value) override 
	{ 
		T tValue = * (static_cast<T*>(value));
		
		return m_min < tValue && tValue < m_max; 
	}	

private:
	T m_min;
	T m_max;
};

template <class T>




template <class T>
bool RangeValidator<T>::operator>(const T& other) {

	return ( this > other);
}
//
//template <>
//bool RangeValidator<char*>::operator>(const T& other) {
//	return (strcmp(m_data, other) > 0);
//}
//
//template <class T>
//bool RangeValidator<T>::operator<(const T& other) {
//	return (m_data < other);
//}
//
//template <>
//bool RangeValidator<char*>::operator<(const T& other) {
//	return (strcmp(m_data, othera) > 0);
//}
