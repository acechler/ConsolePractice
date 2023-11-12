#pragma once
#include "GroceryItem.h"
#include <vector>
#include <iostream>
class IMarket
{
public:
	virtual void addItem(GroceryItem item) = 0;
	virtual void removeItem(GroceryItem item) = 0;
	virtual void updateItem(GroceryItem item) = 0;
	virtual void displayItems() = 0;

	virtual GroceryItem getItem(std::string itemName) = 0;
	virtual GroceryItem getItem(int itemIndex) = 0;


};

