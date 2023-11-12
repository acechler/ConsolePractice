#include "GroceryItem.h"

void GroceryItem::setItemName(std::string itemName)
{
    this->itemName = itemName;
}

void GroceryItem::setItemPrice(double itemPrice)
{
    this->itemPrice = itemPrice;
}

void GroceryItem::setItemQuantity(int itemQuantity)
{
    this->itemQuantity = itemQuantity;
}

void GroceryItem::setItemDescription(std::string itemDescription)
{
	this->itemDescription = itemDescription;
}

std::string GroceryItem::getItemName()
{
    return this->itemName;
}

double GroceryItem::getItemPrice()
{
    return this->itemPrice;
}

int GroceryItem::getItemQuantity()
{
    return this->itemQuantity;
}

std::string GroceryItem::getItemDescription()
{
    return this->itemDescription;
}
