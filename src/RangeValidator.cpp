#include "RangeValidator.h"

template <class T>
RangeValidator<T>::RangeValidator(T min, T max):
	m_min(min),
	m_max(max)
{}
