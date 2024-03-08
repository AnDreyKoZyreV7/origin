#include <iostream>
#include <string>

enum class CityInform
{
    City = 1,
    Street = 2,
    NumberHouse = 3,
    NumberApartment = 4,
    Index = 5
};

void Print(const std::string& city, const std::string& street, int numberhouse, int numberapartment, int index)
{
    std::cout << static_cast<int>(CityInform::City) << ": " << city << std::endl;
    std::cout << static_cast<int>(CityInform::Street) << ": " << street << std::endl;
    std::cout << static_cast<int>(CityInform::NumberHouse) << ": " << numberhouse << std::endl;
    std::cout << static_cast<int>(CityInform::NumberApartment) << ": " << numberapartment << std::endl;
    std::cout << static_cast<int>(CityInform::Index) << ": " << index << std::endl;
}

int main()
{
    std::string city, street;
    int numberhouse, numberapartment, index;

    std::cout << "Enter city: ";
    std::cin >> city;

    std::cout << "Enter street: ";
    std::cin >> street;

    std::cout << "Enter number house: ";
    std::cin >> numberhouse;

    std::cout << "Enter number apartment: ";
    std::cin >> numberapartment;

    std::cout << "Enter Index: ";
    std::cin >> index;

    Print(city, street, numberhouse, numberapartment, index);

    return 0;
}
