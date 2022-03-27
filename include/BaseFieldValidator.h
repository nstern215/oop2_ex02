#pragma once
#include <string>

class BaseFieldValidator{
public:
	
	virtual bool validate(void* value = nullptr) = 0;

	virtual bool operator()(void* value);

	virtual std::string getErrorMessage() = 0;
};
