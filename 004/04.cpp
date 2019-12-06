#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(89);
 Account Account2(-76);
 cout << "Account1's initial balance is: "<< Account1.getAccountBalance()<< "\nAccount2's initial balance is: "<< Account2.getAccountBalance() << endl;
 Account1.credit(200);
 Account2.credit(34);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
 Account1.debit(50);
 Account2.debit(34);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
}
