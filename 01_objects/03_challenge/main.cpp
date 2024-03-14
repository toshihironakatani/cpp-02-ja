// コードを入力してください
#include "bank_account.h"
#include <iostream>

int main() {
  BankAccount bank_account(100);
  bank_account.deposit(50);
  bank_account.withdraw(30);
  bank_account.withdraw(30);
  bank_account.withdraw(150);

  BankAccount bank_account2(10.0);
  bank_account2.withdraw(15.0);
  std::cout << bank_account2.get_balance() << std::endl;
}
