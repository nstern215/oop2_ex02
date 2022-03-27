#pragma once

#include "BaseFieldValidator.h"
#include "FacultyValue.h"

template<class T>
class RangeValidator : public BaseFieldValidator {
public:

	RangeValidator(T min, T max) :m_min(min), m_max(max) {}

	bool validate(void* value) override;

	std::string getErrorMessage() override;

private:
	const std::string m_errMsg = "Out of range";
	
	T m_min;
	T m_max;
};

template <class T>
bool RangeValidator<T>::validate(void* value)
{
	T tValue = *(static_cast<T*>(value));

	return m_min <= tValue && tValue <= m_max;
}

template <>
bool RangeValidator<FacultyValue>::validate(void* value)
{
	FacultyValue tValue = *(static_cast<FacultyValue*>(value));
	
	return m_min <= tValue&& tValue <= m_max;
}

template <class T>
std::string RangeValidator<T>::getErrorMessage()
{
	return m_errMsg;
}
