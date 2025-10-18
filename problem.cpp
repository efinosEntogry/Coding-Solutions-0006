#include <iostream>

using namespace std;

void deposit(float & balance);
void withdraw(float & balance);
void checkBalance(float balance);

int main() {
    float  balance = 500;
   int choice;

    do {

        cout << "*********************************" << endl;
        checkBalance(balance);
        cout << "Choose one of these options: " << endl;
        cout << "0. exit" << endl;
        cout << "1. deposit" << endl;
        cout << "2. withdraw" << endl;
        cout << "3. checkBalance" << endl;
        cin >> choice;

        switch (choice) {
            case 0: checkBalance(balance); break;
            case 1: deposit(balance); break;
            case 2: withdraw(balance); break;
            case 3: checkBalance(balance); break;
            default: cout << "Wrong choice" << endl; break;
        }

    }while (choice != 0);

    cout << "Thank you for using the program!" << endl << endl;

    return 0;
}

void deposit(float & balance) {
    float amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    balance += amount;
}

void withdraw(float & balance) {
    float amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient funds" << endl;
    }else {
        balance -= amount;
    }
}

void checkBalance(float balance) {
    cout << endl << "Balance: $" << balance << endl << endl;
}
