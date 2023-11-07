#pragma once
#include<vector>

// This will be used as a quick way to perform operations on items in a vector container.
// An example would be if I needed an object to add x to a vector of integer, I would create an object that
// inherits this class. I would then add the neccessary actions to modify vector elements.
template <typename T>
class SetModifier
{
public:
	virtual void append(T element) = 0)
	virtual void append(std::vector<T> elements);
	virtual void remove(T element) = 0;
	virtual void run() = 0;
	virtual std::vector<T> extract() = 0;
};
