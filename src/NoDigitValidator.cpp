#include "NoDigitValidator.h"

bool NoDigitValidator::validate(void* value)
{
	std::string str = *(static_cast<std::string*>(value));
	
	for(const char& c : str)
		if (48 <= c && c <= 57)
			return false;	

}

std::string NoDigitValidator::getErrorMessage()
{
	return m_errMsg;
}
