#include "InputValidator.h"

bool InputValidator::check(const std::string& input, bool findDigits = false, bool findAlphas = false)
{
    if (input.empty()) {
        std::cout << "Error, input is empty.\n";
        return false;
    }

    bool hasDigits = false;
    bool hasAlphas = false;

    if (findDigits) {
        hasDigits = containsDigits(input);
    }
    if (findAlphas) {
        hasAlphas = containsAlphas(input);
    }

    return hasDigits || hasAlphas;
}

bool InputValidator::containsDigits(const std::string& input)
{
    for (auto c : input) {
        if (std::isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool InputValidator::containsAlphas(const std::string& input)
{
    for (auto c : input) {
         if (std::isalpha(c)) {
		    return true;
         }
    }
    return false;
}
