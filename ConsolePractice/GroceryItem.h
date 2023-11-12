#pragma once

#include "IShoppingItem.h"

class GroceryItem : public IShoppingItem
{
private:
	std::string itemName;
	double itemPrice;
	int itemQuantity;
	std::string itemDescription;

public:

	// Inherited via IShoppingItem
	void setItemName(std::string itemName) override;
	void setItemPrice(double itemPrice) override;
	void setItemQuantity(int itemQuantity) override;
	void setItemDescription(std::string itemDescription) override;
	std::string getItemName() override;
	double getItemPrice() override;
	int getItemQuantity() override;
	std::string getItemDescription() override;
};

