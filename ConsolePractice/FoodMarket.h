#pragma once
#include "IMarket.h"
class FoodMarket :public IMarket
{

private:

	std::vector<GroceryItem> items;

public:
	FoodMarket();
	~FoodMarket();

	// Inherited via IMarket
	virtual void addItem(GroceryItem item) override;
	virtual void removeItem(GroceryItem item) override;
	virtual void updateItem(GroceryItem item) override;
	virtual void displayItems() override;

	virtual GroceryItem getItem(std::string itemName) override;
	virtual GroceryItem getItem(int itemIndex) override;


};

