#include <iostream>
#include <string>

class Calculator
{
private:
    double num1;
    double num2;

public:
    Calculator(double num1, double num2) : num1(num1), num2(num2) {}

    double Multy() {
        return num1 * num2;
    }

    double add() {
        return num1 + num2;
    }

    double subtracy_1_2() {
        return num1 - num2;
    }

    double subtracy_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool setNum1(double x) {
        if (x != 0) {
            num1 = x;
            return true;
        }
        return false;
    }

    bool setNum2(double y) {
        if (y != 0) {
            num2 = y;
            return true;
        }
        return false;
    }
};

int main() {
    double num1, num2;

    std::cout << "Enter the first number (num1): ";
    std::cin >> num1;
    std::cout << "Enter the second number (num2): ";
    std::cin >> num2;

    Calculator calc(num1, num2);
    
    while (true) {
        std::cout << "Result of multiplication: " << calc.Multy() << std::endl;
        std::cout << "Result of addition: " << calc.add() << std::endl;
        std::cout << "Result of subtraction (num1 - num2): " << calc.subtracy_1_2() << std::endl;
        std::cout << "Result of subtraction (num2 - num1): " << calc.subtracy_2_1() << std::endl;
        std::cout << "Result of division (num1 / num2): " << calc.divide_1_2() << std::endl;
        std::cout << "Result of division (num2 / num1): " << calc.divide_2_1() << std::endl;

        std::cout << "Enter a new value for num1 (or 0 to exit): ";
        std::cin >> num1;
        if (num1 == 0) {
            std::cout << "Exiting...";
            break;
        }
        calc.setNum1(num1);

        std::cout << "Enter a new value for num2 (or 0 to exit): ";
        std::cin >> num2;
        if (num2 == 0) {
            std::cout << "Exiting...";
            break;
        }
        calc.setNum2(num2);
    }

    return 0;
}
