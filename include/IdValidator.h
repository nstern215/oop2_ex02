#pragma once

// A class that represents an ID validator.
// ID validation is done using the control digit.
// Works only on the type 'uint32_t

#include "BaseFieldValidator.h"

class IDValidator : public BaseFieldValidator
{
public:

	IDValidator(unsigned int ID) : m_ID(ID) {}

	bool validate(); 

	//bool operator(string idNumber)

private:

	unsigned int m_ID;

};
