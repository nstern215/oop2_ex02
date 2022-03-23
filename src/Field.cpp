#include "Field.h"
#include <string>

template <class T>
Field<T>::Field(std::string title):
	m_fieldTitle(title)
{}

template <class T>
std::string Field<T>::getFieldTitle() const
{
	return m_fieldTitle;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Field<T>& other)
{
	os << other.getFieldTitle();
	return os;
}