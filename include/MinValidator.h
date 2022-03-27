#pragma once
#include "BaseFieldValidator.h"

template<class T>
class MinValidator : public BaseFieldValidator
{
public:
	MinValidator(T min): m_min(min){};
	
	bool validate(void* value) override;	
	std::string getErrorMessage() override;
private:
	T m_min;

	std::string m_errMsg = "Out of range";
};

template <class T>
bool MinValidator<T>::validate(void* value) {

	T tValue = *(static_cast<T*>(value));
	
	return m_min <= tValue;
}

template <class T>
std::string MinValidator<T>::getErrorMessage()
{
	return m_errMsg;
}
