#include <iostream>

int main() {
    int height;

    // Get the height of the pyramid from the user
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    // Loop to iterate through each row
    for (int i = 0; i < height; ++i) {
        // Loop to print spaces before the '*' on each row
        for (int j = 0; j < height - i - 1; ++j) {
            std::cout << " ";
        }

        // Loop to print '*' characters in increasing order
        for (int k = 0; k < 2 * i + 1; ++k) {
            std::cout << "*";
        }

        // Move to the next line after printing each row
        std::cout << std::endl;
    }

    return 0;
}
