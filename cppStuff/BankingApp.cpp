#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;
    
    // Constructor
    BankAccount() {
        balance = 0;
    }

    void showBalance() const {
        cout << "Your balance is: " << balance << " Leke.\n";
    }

    void deposit() {
        double amount = 0;
        cout << "How much would you like to deposit (Leke)? ";
        cin >> amount;

        // Checking if amount deposited is positive
        if(amount > 0) {
            balance += amount;
            cout << "Successfully deposited: " << amount << " Leke.\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    void withdraw() {
        double amount = 0;
        cout << "How much would you like to withdraw (Leke)? ";
        cin >> amount;

        // Checking if amount withdrawn is valid
        if(amount > balance) {
            cout << "Not enough money in the bank!\n";
        } else if(amount < 0) {
            cout << "Invalid withdraw amount!\n";
        } else {
            balance -= amount;
            cout << "You withdrew: " << amount << " Leke.\n";
        }
    }
};

int main() {
    BankAccount account;
    int choice = 0;

    // do-while loop qe programi te perseritet
    do {
        cout << "****************\n";
        cout << "Enter your choice: \n";
        cout << "****************\n";
        cout << "1. Show Balance. \n";
        cout << "2. Deposit. \n";
        cout << "3. Withdraw. \n";
        cout << "4. Exit.\n";
        cin >> choice;

        cin.clear();

        // switch case per zgjedhjen e userit
        switch (choice) {
            case 1: account.showBalance();
                    break;
            case 2: account.deposit();
                    account.showBalance();
                    break;
            case 3: account.withdraw();
                    account.showBalance();
                    break;
            case 4: cout << "Thanks for visiting!\n";
                    break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;
}
