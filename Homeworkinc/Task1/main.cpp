#include <iostream>
#include <fstream>
#include <string>

class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int flatNumber;

public:
    Address(std::string c, std::string s, int h, int f) : city(c), street(s), houseNumber(h), flatNumber(f) {}

    std::string getOutputAddress() {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(flatNumber);
    }
};

int main() {
    std::ifstream inputFile("in.txt");

    if (!inputFile.is_open()) {
        std::cout << "Ошибка открытия файла in.txt\n";
        return 1;
    }

    int n;
    inputFile >> n;

    Address** addresses = new Address*[n];

    for (int i = 0; i < n; ++i) {
        std::string city, street;
        int houseNumber, flatNumber;

        inputFile >> city >> street >> houseNumber >> flatNumber;
        addresses[i] = new Address(city, street, houseNumber, flatNumber);
    }

    inputFile.close();

    std::ofstream outputFile("out.txt");

    if (!outputFile.is_open()) {
        std::cout << "Ошибка создания файла out.txt\n";
        return 1;
    }

    outputFile << n << std::endl;

    for (int i = n - 1; i >= 0; --i) {
        outputFile << addresses[i]->getOutputAddress() << std::endl;
    }

    outputFile.close();

    for (int i = 0; i < n; ++i) {
        delete addresses[i];
    }

    delete[] addresses;

    return 0;
}
