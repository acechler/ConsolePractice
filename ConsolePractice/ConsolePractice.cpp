// ConsolePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "InputValidator.h"
#include "FoodMarket.h"

void inputValidatorExample() {

	// input validator example
	InputValidator iv;
	std::string input = "123";
	std::cout << "Input: " << input << "\n";
	std::cout << std::boolalpha << "Contains digits: " << iv.check(input, true, false) << "\n";
	std::cout << std::boolalpha << "Contains alphas: " << iv.check(input, false, true) << "\n";
	std::cout << std::boolalpha << "Contains digits or alphas: " << iv.check(input, true, true) << "\n";
	std::cout << std::boolalpha << "Contains neither digits nor alphas: " << iv.check(input, false, false) << "\n";


}

void foodMarketExample() {
	
	// food market example
	FoodMarket fm;
	GroceryItem item;
	item.setItemName("Apple");
	item.setItemPrice(1.99);
	item.setItemQuantity(10);
	item.setItemDescription("Red Apple");
	fm.addItem(item);
	fm.displayItems();
	std::cout << "Item name: " << fm.getItem("Apple").getItemName() << std::endl;
	std::cout << "Item price: " << fm.getItem("Apple").getItemPrice() << std::endl;
	std::cout << "Item quantity: " << fm.getItem("Apple").getItemQuantity() << std::endl;
	std::cout << "Item description: " << fm.getItem("Apple").getItemDescription() << std::endl;
	std::cout << "Item name: " << fm.getItem(0).getItemName() << std::endl;
	std::cout << "Item price: " << fm.getItem(0).getItemPrice() << std::endl;
	std::cout << "Item quantity: " << fm.getItem(0).getItemQuantity() << std::endl;
	std::cout << "Item description: " << fm.getItem(0).getItemDescription() << std::endl;
}

int main(){

	foodMarketExample();

	
	return 0;
}

