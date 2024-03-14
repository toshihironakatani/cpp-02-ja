// コードを入力してください
#include <iostream>
#include "bank_account.h"

void BankAccount::deposit(double amount) {
  if (amount >=0) {
    this->balance += amount;
  }
  std::cout << this->get_balance() << std::endl;
};

void BankAccount::withdraw(double amount) {
  if((this->balance >= amount) && (amount >= 0)) {
    this->balance -= amount;
    std::cout << this->get_balance() << std::endl;
  }
  else {
    std::cout << "Insufficient balance!" << std::endl;
  }
}

double BankAccount::get_balance() const {
  return this->balance;
}
