#include "IdValidator.h"

bool IDValidator::validate(void* value)
{
	unsigned int idValue = *(static_cast<unsigned int*>(value));
	int idSum = 0;

	for (int i = 0; idValue != 0; idValue/=10, i++)
		if (i % 2 == 0)
			idSum += idValue % 10;
		else if (idValue % 10 >= 5)
			idSum += 1 + idValue % 10 * 2 % 10;
		else
			idSum += idValue % 10 * 2;

	return idSum % 10 == 0;
}

std::string IDValidator::getErrorMessage()
{
	return m_errMsg;
}
