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
	std::string getFieldTitle() const override;
private:
	std::string m_fieldTitle;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Field<T>& other);