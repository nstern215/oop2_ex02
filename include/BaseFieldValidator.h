#pragma once

class BaseFieldValidator{
public:
	
	virtual bool validate(void* value = nullptr) = 0;

	virtual bool operator()(void* value);

	//todo: error message
	//virtual std::string getErrorMessage() = 0;
};
