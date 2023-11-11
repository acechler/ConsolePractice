// ConsolePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "InputValidator.h"




int main(){


	// input validator example
	InputValidator iv;
	std::string input = "123";
	std::cout << "Input: " << input << "\n";
	std::cout << std::boolalpha << "Contains digits: " << iv.check(input, true, false) << "\n";
	std::cout << std::boolalpha << "Contains alphas: " << iv.check(input, false, true) << "\n";
	std::cout << std::boolalpha << "Contains digits or alphas: " << iv.check(input, true, true) << "\n";
	std::cout << std::boolalpha << "Contains neither digits nor alphas: " << iv.check(input, false, false) << "\n";


	
	return 0;
}

