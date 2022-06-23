#include <iostream>
#include <string>

struct account {
	int number = 0;
	std::string name;
	float balance = 0;
};

void balance_edit(account& acc) {
	std::cout << "Введите новый баланс: ";
	std::cin >> acc.balance;
}

int main() {

	setlocale(LC_ALL, "Russian");

	account acc;
	std::cout << "Введите номер счёта: ";
	std::cin >> acc.number;
	std::cout << "Введите имя владельца: ";
	std::cin >> acc.name;
	std::cout << "Введите баланс: ";
	std::cin >> acc.balance;

	balance_edit(acc);

	std::cout << "Ваш счёт: " << acc.name << ", " << acc.number << ", " << acc.balance;
}