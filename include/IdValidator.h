#pragma once

#include "BaseFieldValidator.h"

class IDValidator : public BaseFieldValidator
{
public:

	IDValidator(unsigned int ID) : m_ID(ID) {}

	bool validate(); 

	unsigned int getID();

private:

	unsigned int m_ID;

};
