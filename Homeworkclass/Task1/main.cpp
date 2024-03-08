#include <iostream>
#include <string>

class Calculator
{
public:
    double x, y;
    Calculator( double x, double y)     :x(x), y(y) {}

    double Multy(double x, double y){this ->x=x; this ->y=y; x*y; return y - x;}

    double add(double x, double y){this ->x=x; this ->y=y; x+y; return y + x;}

    double subtracy_1_2(double x, double y){this ->x=x; this ->y=y; x-y; return x - y;}

    double subtracy_2_1(double x, double y){this ->x=x; this ->y=y; y-x; return y - x;}

    double divide_1_2(double x, double y){this ->x=x; this ->y=y; x/y; return x/y;}

    double divide_2_1(double x, double y){this ->x=x; this ->y=y; y/x; return y/x;}

    bool set_num1(double x) {
        if (x != 0) {
            this->x = x;
            return true;
        }
        return false;
    }

    bool set_num2(double y) {
        if (y != 0) {
            this->y = y;
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
    std::cout << "Result of multiplication: " << calc.Multy(num1, num2) << std::endl;
    std::cout << "Result of addition: " << calc.add(num1, num2) << std::endl;
    std::cout << "Result of subtraction (num1 - num2): " << calc.subtracy_1_2(num1, num2) << std::endl;
    std::cout << "Result of subtraction (num2 - num1): " << calc.subtracy_2_1(num1,num2) << std::endl;
    std::cout << "Result of division (num1 / num2): " << calc.divide_1_2(num1, num2) << std::endl;
    std::cout << "Result of division (num2 / num1): " << calc.divide_2_1(num1, num2) << std::endl;

    std::cout << "Enter a new value for num1 (or 0 to exit): ";
    std::cin >> num1;
    if (num1 == 0) {
        std::cout << "Enter is incorrect";
    }
    calc.set_num1(num1);

    std::cout << "Enter a new value for num2 (or 0 to exit): ";
    std::cin >> num2;
    if (num2 == 0) {
        std::cout << "Enter is incorrect";
    }
    calc.set_num2(num2);
}
    return 0;
}