#include <iostream>
#include <string>
using namespace std;
class BankAccount {
    private:
    string accountHolder;
    double balance;
    public:
    BankAccount(string name, double intialBalance) {
    accountHolder = name;
    if (intialBalance >= 0){
    balance = intialBalance;
    } else {
        balance = 0;
        cout << "Warning: Intial balance cannot be negative. Set to 0." << endl;
    }
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited:$" << amount << endl;
        } else { 
            cout << "Error: Deposit amount must be greater than 0." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount <= 0){
            cout << "Error: Withdrawal amount must be greater than 0." << endl;
            return;
        }
        if (amount > balance) {
            cout << "Error: Insufficient funds! Current balance is $" << balance << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew:$" << amount << endl;
        }
    }
    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current balance:$ " << balance << endl;
    }
};
int main() {
    cout << "--- Opening Account ---" << endl;
    BankAccount paulAccount("Paul Smith", 500.00);
    paulAccount.displayBalance();
    cout << "\n Attempting Deposits" << endl;
    paulAccount.deposit(200.00);
    paulAccount.deposit(-50.00);
    cout << "\n--- Attempting Withdrawals ---" << endl;
    paulAccount.withdraw(100.00);
    paulAccount.withdraw(100.00);
    paulAccount.withdraw(-20.00);
    cout << "\n--- Final Account Status ---" << endl;
    paulAccount.displayBalance();
    return 0;
}