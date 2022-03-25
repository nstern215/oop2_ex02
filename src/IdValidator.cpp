#include "IdValidator.h"


bool IDValidator::validate()
{
	int left = 1, 
		right = 100000000,
		IDSum = 0;

	for (int i = 0; i < 8; i++) {
		
		int num = 0;

		num += (m_ID / right) % left;

		if (i % 2 == 0)
			num *= 2;
		
		if (num > 9) {
			int newNum = num / 10 + num % 10;
			num = newNum;
		}

		IDSum += num;

		right = right / 10;
		left = left * 10; 
	}

	if ((IDSum + m_ID / right) % 2 == 0)
		return true;
	else
		return false;
}

unsigned int IDValidator::getID()
{
	return m_ID;
}
