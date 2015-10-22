#include <iostream>
#include "BankAccount.h"

int main() {
	using std::cout;

	cout << "Using constructors to creat new objects\n";
	BankAccount b1("JNU", "234", 12345.0);
	b1.show();

	BankAccount b2 = BankAccount("SCAU", "0123", 23456.0);
	b2.show();

	cout << "Deposite money to b1\n";
	b1.deposite(100.2);
	b1.show();

	cout << "withdraw money from b2\n";
	b2.withdraw(50.1);
	b2.show();

	return 0;
}