#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> T& Vector<T>::operator[] (Rank r) const{
	return _elem[r];
}