#include <iostream>
#include <string>

struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};к

void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    std::cout << "Enter number account: ";
    std::cin >> account.accountNumber;

    std::cout << "Enter Name user: ";
    std::cin >> account.ownerName;

    std::cout << "Enter balance: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Enter new balance: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Yours Bill: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
