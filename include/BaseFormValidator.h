#pragma once
#include <string>


class BaseFormValidator{
public:

	virtual bool validate() = 0;
	virtual std::string getErrMsg() const = 0;
};
