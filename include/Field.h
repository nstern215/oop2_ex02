#pragma once
#include <string>
#include <vector>

#include "BaseField.h"
#include "BaseValidator.h"

template<class T>
class Field : public BaseField
{
public:
	Field(std::string title);
	void addValidator(BaseValidator* validator);
	std::string getFieldTitle() const;
private:
	std::string m_fieldTitle;
	std::vector<BaseValidator*> m_validators;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Field<T>& other);