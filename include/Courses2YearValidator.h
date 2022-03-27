#pragma once

#include <iostream>
#include <string>

template <class T1, class T2>
class Courses2YearValidator : public BaseFormValidator {

public:

	Courses2YearValidator(T1* courseField, T2* yearField) :
		m_courseField(courseField),
		m_yearField(yearField){}

	bool validate() override;

	std::string getErrMsg() const override;

private:
	T1* m_courseField;
	T2* m_yearField;

	std::string m_errMsg = "Courses and year don't match";

};

template <class T1, class T2>
std::string Courses2YearValidator<T1, T2>::getErrMsg() const
{
	return m_errMsg;
}

template <class T1, class T2>
bool Courses2YearValidator<T1, T2>::validate()
{
	const int course = m_courseField->getValue();
	const int year = m_yearField->getValue();

	bool isValid = true;

	if (course < 2)
		isValid = false;
	
	switch (year)
	{
	case 1:
	case 2:
		isValid = course <= 6;
		break;
	case 3:
	case 4:
		isValid = course <= 10;
		break;
		default:
		isValid = course <= 8;
		break;
	}

	if (!isValid)
	{
		m_courseField->setIsValid(false);
		m_yearField->setIsValid(false);
	}

	return isValid;
}
