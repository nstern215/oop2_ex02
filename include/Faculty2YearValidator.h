#pragma once

#include <iostream>
#include <string>

template <class T>
class Faculty2YearValidator : BaseFormValidator {

public:

	Faculty2YearValidator(unsigned int  courseNum, unsigned int  year):m_courseNum(courseNum){}

	bool validate(void* value);



private:

	unsigned int m_courseNum;

};

template<class T>
inline bool Faculty2YearValidator<T>::validate(void* value)
{



	return false;
}



