#pragma once
#include <string>

class IShoppingItem {
private:

public:

	virtual void setItemName(std::string itemName) = 0;
	virtual void setItemPrice(double itemPrice) = 0;
	virtual void setItemQuantity(int itemQuantity) = 0;
	virtual void setItemDescription(std::string itemDescription) = 0;

	virtual std::string getItemName() = 0;
	virtual double getItemPrice() = 0;
	virtual int getItemQuantity() = 0;
	virtual std::string getItemDescription() = 0;
};