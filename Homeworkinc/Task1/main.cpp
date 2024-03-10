#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class CityInformation {
private:
    std::string city;
    std::string street;
    int numberhouse;
    int appartmentnumber;

public:
    CityInformation(std::string P_namecity, std::string P_name_street, int P_numberhouse, int P_numberflat)
    {
        city = P_namecity;
        street = P_name_street;
        numberhouse = P_numberhouse;
        appartmentnumber = P_numberflat;
        std::cout << "City Information has been created" << std::endl;
    }

    std::string getOutputAddress() {
        return city + ", " + street + ", " + std::to_string(numberhouse) + ", " + std::to_string(appartmentnumber);
    }
};

int main() {
    std::ifstream in("in.txt");
    std::ofstream out("out.txt");

    if (!in.is_open()) {
        std::cout << "Error opening input file\n";
        return 1;
    }

    if (!out.is_open()) {
        std::cout << "Error opening output file\n";
        return 1;
    }

    int N;
    in >> N;

    std::vector<CityInformation> cities;
    for (int i = 0; i < N; i++) {
        std::string city, street;
        int house, flat;
        in >> city >> street >> house >> flat;
        cities.emplace_back(city, street, house, flat);
    }

    for (CityInformation cityInfo : cities) {
        out << cityInfo.getOutputAddress() << std::endl;
    }

    std::cout << "Process completed successfully\n";

    return 0;
}