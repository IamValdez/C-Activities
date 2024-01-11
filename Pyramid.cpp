#include <iostream>

int main() {
    int rows;

    // Christian Jay Valdez
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
