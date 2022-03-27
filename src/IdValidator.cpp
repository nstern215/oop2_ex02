#include "IdValidator.h"


bool IDValidator::validate(void* value)
{
	unsigned int IDvalue = *(static_cast<int*>(value));

	int IDsum = 0;


	for (int i = 9, j = 10 ; i > 0; i-- , j*= 10) {

		int num = IDvalue % j;

		if (i % 2 == 0) {

			num *= 2;

			if (num > 9) {

				num = (num % 10) + (num / 10);
			}
		}

		IDsum += num;

		IDvalue = IDvalue % j;
	}

	if ((IDsum) % 2 == 0)
		return true;
	else
		return false;
}
