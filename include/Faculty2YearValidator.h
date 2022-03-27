#pragma once

#include <iostream>
#include <string>

template <class T1, class T2>
class Faculty2YearValidator : public BaseFormValidator {

public:

	Faculty2YearValidator(T1* faculty, T2*  year):
		m_facultyField(faculty),
		m_yearField(year)
	{}

	std::string getErrMsg() const override;
	bool validate() override;

private:
	T1* m_facultyField;
	T2* m_yearField;

	std::string m_errMsg = "Faculty and year don't match";
};

template <class T1, class T2>
std::string Faculty2YearValidator<T1, T2>::getErrMsg() const
{
	return m_errMsg;
}


template <class T1, class T2>
bool Faculty2YearValidator<T1, T2>::validate()
{
	const int faculty = m_facultyField->getValue();
	const int year = m_yearField->getValue();

	bool isValid = false;
	
	if (year < 1)
		isValid = false;
	
	switch (faculty)
	{
	case 1:
		isValid = year <= 4;
		break;
	case 2:
		isValid = year <= 7;
		break;
	case 3:
		isValid = year <= 3;
		break;
		default:
			isValid = false;
	}

	if (!isValid)
	{
		m_facultyField->setIsValid(false);
		m_yearField->setIsValid(false);
	}

	return isValid;
}
