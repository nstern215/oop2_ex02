#include "NoDigitValidator.h"

bool NoDigitValidator::validate(void* value)
{

	m_name = *(static_cast<std::string*>(value));

	bool digitFound = false;

	for (int i = 0; m_name[i] != '\0'; i++) {

		if ((m_name[i] >= 48) && (m_name[i] <= 57)) {
			digitFound = true;
			break;
		}
	}

	if (!digitFound) 
		return true;	
	else 
		return false;
	
}
