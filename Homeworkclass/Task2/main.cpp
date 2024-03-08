#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    Counter() {
        value = 1;
    }

    Counter(int initialValue) {
        value = initialValue;
    }

    void increase() {
        value++;
    }

    void decrease() {
        value--;
    }

    int getValue() {
        return value;
    }
};

int main() {
    std::string CreateInitialValue;
    std::cout << "You are want to enter value counter? Enter Yes or Not: ";
    std::cin >> CreateInitialValue;

    int initialValue;

    if (CreateInitialValue == "Yes") {
        std::cout << "Enter begin value counter: ";
        std::cin >> initialValue;
    } else {
        initialValue = 1;
    }

    Counter counter(initialValue);

    std::string command;

    while (command != "x") {
        std::cout << "Enter command ('+', '-', '=' or 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter.increase();
        } else if (command == "-") {
            counter.decrease();
        } else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        }
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}
