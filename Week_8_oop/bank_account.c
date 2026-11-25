#include <stdio.h>
#include <string.h>
struct BankAccount {
    char accountHolder[50];
    double balance;
};
void initAccount(struct BankAccount *acc, const char *name, double initialBalance){
    strcpy(acc->accountHolder, name);
    if (initialBalance >= 0){
        acc->balance = initialBalance;
    } else {
        acc->balance = 0;
        printf("Warning: Intial balance cannot be negative. Set to 0.\n");
    }
}
void deposit(struct BankAccount *acc, double amount) {
    if (amount> 0){
        acc->balance += amount;
        printf("Successfully deposited: $%.2f\n", amount);
    } else {
        printf("Error: Deposit amount must be greater than 0.\n");
    }
}
void withdraw(struct BankAccount *acc, double amount){
    if (amount <= 0) {
        printf("Error: Withdrawal amount must be greater than ).\n");
        return;
    }
    if (amount > acc->balance) {
    printf("Error: Insufficient funds! Current balance is $%.2f\n", acc->balance);
    } else {
        acc->balance -= amount;
        printf("Successfully withdrew: $%.2f\n",amount);
    }
}
void displayBalance(struct BankAccount *acc) {
    printf("Account Holder: %s\n", acc->accountHolder);
    printf("Current Balance: $%.2f\n", acc->balance);
}
int main() {
    struct BankAccount aliceAccount;
    initAccount(&aliceAccount, "Alie Smith", 500.00);
    displayBalance(&aliceAccount);
    printf("\n--- Attempting Deposits ---\n");
    deposit(&aliceAccount, 200.00);
    deposit(&aliceAccount, -50.00);
    printf("\n--- Attempting Withdrawals ---\n");
    withdraw(&aliceAccount, 1000.000);
    withdraw(&aliceAccount, -20.00);
    printf("\n--- Final Account status ---\n");
    displayBalance(&aliceAccount);
    return 0;
}