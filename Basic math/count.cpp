#include <iostream>
#include <vector>

int main() {
    // Extracting the last digit
    int number = 123;
    int lastDigit = number % 10;
    std::cout << "Last digit: " << lastDigit << std::endl;

    // Reducing the number by one digit
    number /= 10;
    std::cout << "Number after reducing by one digit: " << number << std::endl;

    // Creating a number from digits
    std::vector<int> digits = {1, 2, 3};
    int createdNumber = 0;
    for (int digit : digits) {
        createdNumber = createdNumber * 10 + digit;
    }
    std::cout << "Created number from digits: " << createdNumber << std::endl;

    return 0;
}

