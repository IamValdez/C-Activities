#include <iostream>
#include <cmath>
#include <vector>

class Calculator {
private:
    std::vector<double> history;

public:
    double add(double a, double b) {
        double result = a + b;
        saveResult(result);
        return result;
    }

    double subtract(double a, double b) {
        double result = a - b;
        saveResult(result);
        return result;
    }

    double multiply(double a, double b) {
        double result = a * b;
        saveResult(result);
        return result;
    }

    double divide(double a, double b) {
        if (b != 0) {
            double result = a / b;
            saveResult(result);
            return result;
        } else {
            std::cerr << "Error: Division by zero." << std::endl;
            return 0.0;
        }
    }

    double squareRoot(double a) {
        double result = sqrt(a);
        saveResult(result);
        return result;
    }

    double power(double base, double exponent) {
        double result = pow(base, exponent);
        saveResult(result);
        return result;
    }

    double getResult(size_t index) {
        if (index < history.size()) {
            return history[index];
        } else {
            std::cerr << "Error: Result index out of bounds." << std::endl;
            return 0.0;
        }
    }

    void showHistory() {
        std::cout << "Calculation History:" << std::endl;
        for (size_t i = 0; i < history.size(); ++i) {
            std::cout << "Result " << i + 1 << ": " << history[i] << std::endl;
        }
    }

private:
    void saveResult(double result) {
        history.push_back(result);
    }
};

int main() {
    Calculator calculator;

    char choice;
    do {
        std::cout << "Select operation:" << std::endl;
        std::cout << "1. Add      2. Subtract      3. Multiply      4. Divide" << std::endl;
        std::cout << "5. Square Root      6. Power      7. Show History      8. Quit" << std::endl;

        int operation;
        std::cout << "Enter operation number: ";
        std::cin >> operation;

        double num1, num2;
        switch (operation) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
                std::cout << "Enter first number: ";
                std::cin >> num1;
                std::cout << "Enter second number: ";
                std::cin >> num2;
                break;
            case 5:
                std::cout << "Enter a number: ";
                std::cin >> num1;
                break;
            default:
                break;
        }

        switch (operation) {
            case 1:
                std::cout << "Result: " << calculator.add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Result: " << calculator.subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Result: " << calculator.multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Result: " << calculator.divide(num1, num2) << std::endl;
                break;
            case 5:
                std::cout << "Result: " << calculator.squareRoot(num1) << std::endl;
                break;
            case 6:
                std::cout << "Result: " << calculator.power(num1, num2) << std::endl;
                break;
            case 7:
                calculator.showHistory();
                break;
            case 8:
                std::cout << "Exiting calculator. Goodbye!" << std::endl;
                return 0;
            default:
                std::cerr << "Error: Invalid operation." << std::endl;
                break;
        }

        std::cout << "Do you want to perform another operation? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
