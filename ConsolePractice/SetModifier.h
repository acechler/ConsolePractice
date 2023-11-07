#pragma once
#include<vector>

// Make this a template adt
template <typename T>
class SetModifier
{
public:
	virtual void append(T element) = 0)
	virtual void remove(T element) = 0;
	virtual void clear() = 0;
	virtual void sort() = 0;
	virtual void insert(T element, int index) = 0;
	virtual void replace(T element, int index) = 0;
	virtual std::vector<T> extract() = 0;
};
