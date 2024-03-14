// コードを入力してください
class BankAccount {
public:
  BankAccount(double balance) : balance(balance) {};
  void deposit(double amount);
  void withdraw(double amount);
  double get_balance() const;

private:
  double balance;
};
