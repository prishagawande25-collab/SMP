#include <iostream>
using namespace std;

class ATM {
private:
    int balance = 1000;
    int pin = 1234;

public:
    // Function for PIN check
    void login() {
        int userPin;
        cout << "Enter PIN: ";
        cin >> userPin;

        if (userPin != pin) {
            cout << "Wrong PIN!\n";
            return;
        }

        menu(); // go to menu if correct
    }

    // Menu function
    void menu() {
        int choice;

        do {
            cout << "\n1. Check Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1) {
                checkBalance();
            } else if (choice == 2) {
                deposit();
            } else if (choice == 3) {
                withdraw();
            }

        } while (choice != 4);
    }

    // Check balance
    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }

    // Deposit
    void deposit() {
        int amount;
        cout << "Enter amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    // Withdraw
    void withdraw() {
        int amount;
        cout << "Enter amount: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Not enough balance\n";
        } else {
            balance = balance - amount;
        }
    }
};

int main() {
    ATM obj;
    obj.login();
    return 0;
}
