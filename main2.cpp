
#include <iostream>
using namespace std;


class BankAccount {

private:
   
    int accountNumber;
    string accountHolder;
    double balance;

public:
   
    BankAccount(int number, string holder, double initialBalance) {
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

   
    void deposit(double amount) {

        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
        }
        else {
            balance = balance + amount;
            cout << "Deposit successful: " << amount << endl;
        }
    }

    
    void withdraw(double amount) {

        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance = balance - amount;
            cout << "Withdrawal successful: " << amount << endl;
        }
    }


    double getBalance() {
        return balance;
    }

  
    void displayAccountInformation() {

        cout << "\nAccount Information" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

  
    BankAccount account1(1001, "Fayez Ali", 5000);
    BankAccount account2(1002, "Rahim Ahmed", 3000);

   
    cout << "Account 1 Transactions" << endl;

    account1.deposit(2000);
    account1.withdraw(1000);
    account1.withdraw(10000); 
    account1.deposit(-500);   
    account1.withdraw(0);     

   
    cout << "\nAccount 2 Transactions" << endl;

    account2.deposit(1500);
    account2.withdraw(500);

  
    account1.displayAccountInformation();
    account2.displayAccountInformation();

  
    cout << "\nCurrent Balance of Account 1: "
         << account1.getBalance() << endl;

    return 0;
}
