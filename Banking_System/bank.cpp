#include <iostream>
using namespace std;

class Account {
private:
    string name;
    int accNumber;
    double balance;

public:

    void createAccount() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Deposit Successful\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount > balance)
            cout << "Insufficient Balance\n";
        else {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        }
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAccount Number: " << accNumber;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {

    Account acc;
    int choice;

    acc.createAccount();

    while(true) {
        cout << "\n1 Deposit";
        cout << "\n2 Withdraw";
        cout << "\n3 Show Balance";
        cout << "\n4 Exit";
        cout << "\nEnter choice: ";

        cin >> choice;

        switch(choice) {
            case 1:
                acc.deposit();
                break;

            case 2:
                acc.withdraw();
                break;

            case 3:
                acc.display();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

        if(choice == 4)
            break;
    }

    return 0;
}
