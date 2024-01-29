#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int reversedNum = 0;
    while (num != 0) {
        int lastDigit = num % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        num /= 10;
    }

    std::cout << "Reverse of the input integer: " << reversedNum << std::endl;

    return 0;
}
