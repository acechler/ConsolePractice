// ConsolePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


class InputValidator {

public:

	bool check(std::string& input, bool findDigits = false, bool findAlphas = false) {
		bool hasDigits = false;
		bool hasAlphas = false;
		bool isEmpty = false;


		if (input.empty()) {
			std::cout << "Error, input is empty.\n";
			isEmpty = true;
			return isEmpty;
		}
		else {

			if (findDigits) {
				hasDigits = digitParser(input, hasDigits);
				return hasDigits;
			}
			if (findAlphas) {
				hasAlphas = alphaParser(input, hasAlphas);
				return hasAlphas;
			}
		}
	}

private:
	bool digitParser(std::string& input, bool& hasDigits) {
		// Check for numeric characters in input
		for (int i = 0; i < input.size(); i++) {
			hasDigits = std::isdigit(input[i]);
			if (hasDigits)
				i = input.size();
		}
		if (hasDigits == true) {
			std::cout << "Error, no numeric characters please.\n";
			return true;
		}
		else {
			return false;
		}
	}

	bool alphaParser(std::string& input, bool& hasAlphas) {
		// Check for alphabetical characters in input
		for (int i = 0; i < input.size(); i++) {
			hasAlphas = std::isalpha(input[i]);
			if (hasAlphas)
				i = input.size();
		}
		if (hasAlphas == true) {
			std::cout << "Error, no alphabetical characters please.\n";
			return true;
		}
		else {
			return false;
		}
	}

};


int main(){

	std::string input;
	bool inputFlag = true;

	InputValidator inputValidator;

	while (inputFlag) {
		std::cout << "Please, enter your full input: ";
		std::getline(std::cin, input);
		inputFlag = inputValidator.check(input, true, false);
	}
	return 0;
}

