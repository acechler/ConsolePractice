#pragma once
#include<iostream>
#include<string>

class InputValidator
{
public:
	bool check(const std::string& input, bool findDigits, bool findAlphas);
private:
	bool containsDigits(const std::string& input);
	bool containsAlphas(const std::string& input);
};

