#pragma once

#include <iostream>
#include <string>

template <class T>
class Courses2YearValidator : BaseFormValidator {

public:

	Courses2YearValidator(unsigned int  courseNum, unsigned int  year) :m_courseNum(courseNum),
		m_year(year) {}

	bool validate();



private:

	unsigned int m_courseNum;

	unsigned int m_year;

};


template <class T>
bool Courses2YearValidator<T>::validate() {



}
