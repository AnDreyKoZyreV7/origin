#include <iostream>

enum class Month {
    January = 1,
    February=2,
    March=3,
    April=4,
    May=5,
    June=6,
    July=7,
    August=8,
    September=9,
    October=10,
    November=11,
    December=12
};

void Asking_user() {
    int month;
    while (true) {
        std::cout << "Enter month number: ";
        std::cin >> month;

        if (month == 0) {
            std::cout << "Goodby" << std::endl;
            break;
        }

        Month userMonth = static_cast<Month>(month);
        switch (userMonth) {
            case Month::January:
                std::cout << "January" << std::endl;
                break;
            case Month::February:
                std::cout << "February" << std::endl;
                break;
            case Month::March:
                std::cout << "March" << std::endl;
                break;
            case Month::April:
                std::cout << "April" << std::endl;
                break;
            case Month::May:
                std::cout << "May" << std::endl;
                break;
            case Month::June:
                std::cout << "June" << std::endl;
                break;
            case Month::July:
                std::cout << "July" << std::endl;
                break;
            case Month::August:
                std::cout << "August" << std::endl;
                break;
            case Month::September:
                std::cout << "September" << std::endl;
                break;
            case Month::October:
                std::cout << "October" << std::endl;
                break;
            case Month::November:
                std::cout << "November" << std::endl;
                break;
            case Month::December:
                std::cout << "December" << std::endl;
                break;
            default:
                std::cout << "Dont correct number month!" << std::endl;
                break;
        }
    }
}

int main() {
    Asking_user();
    return 0;
}
