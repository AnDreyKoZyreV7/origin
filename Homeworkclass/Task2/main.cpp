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
    Counter c;

    std::string q;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> q;

    if (q == "да") {
        int count;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;
        c = Counter(count);
    }

    std::string command = "";

    while (command != "x") {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+") {
            c.increase();
        } else if (command == "-") {
            c.decrease();
        } else if (command == "=") {
            std::cout << c.getValue() << std::endl;
        }
    }

    std::cout << "До свидания!" << std::endl;

    return 0;
}
