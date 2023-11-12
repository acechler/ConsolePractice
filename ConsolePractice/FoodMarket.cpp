#include "FoodMarket.h"

FoodMarket::FoodMarket()
{
	// initialize items
	items = std::vector<GroceryItem>(10);
}

FoodMarket::~FoodMarket()
{
	// delete items
	items.clear();
}

void FoodMarket::addItem(GroceryItem item)
{
	// add item to items
	items.push_back(item);
}

void FoodMarket::removeItem(GroceryItem item)
{
	items.erase(std::remove(items.begin(), items.end(), item), items.end());
}

void FoodMarket::updateItem(GroceryItem item)
{
	
	for (GroceryItem item : items) {
		if (item.getItemName() == item.getItemName()) {
			item = item;
			break;
		}
	}

}

void FoodMarket::displayItems()
{
	for (GroceryItem item : items) {
		std::cout << item.getItemName() << "  " << item.getItemPrice() << std::endl;
	}
}


GroceryItem FoodMarket::getItem(std::string itemName)
{
	for (GroceryItem item : items) {
		if (itemName == item.getItemName()) {
			return item;
		}
	}
}

GroceryItem FoodMarket::getItem(int itemIndex)
{
	return items[itemIndex];
}

