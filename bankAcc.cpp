/*Implement a Program in C++ by defining a class to represent a bank
account.
Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/

#include <iostream>

using namespace std;

class Account {
    private:
        string name;
        int acc_no;
        string type;
        int balance;
    public:
        void setDetails(string name, int acc_no, string type, int balance) {
            this -> name = name;
            this -> acc_no = acc_no;
            this -> type = type;
            this -> balance = balance;
        }

        void deposit(int amount) {
            balance += amount;
        }

        void withdraw(int amount) {
            balance -= amount;
            cout << "Updated balance = " << balance << endl;
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
            cout << endl;
        }
};

int main() {
    Account accounts;
    string name;
    int acc_no;
    string type;
    int balance;

    cout << "Enter name, acc_no, type, balance: ";
    cin >> name >> acc_no >> type >> balance;
    accounts.setDetails(name, acc_no, type, balance);

    int amount;
    string choice;
    int c = 1;

    while (c) {

        cout << "Enter choice (deposit, withdraw, check): ";
        cin >> choice;

        if (choice == "deposit") {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            accounts.deposit(amount);
        }
        else if (choice == "withdraw") {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            accounts.withdraw(amount);
        }
        else if (choice == "check") {
            accounts.display();
        }
        else {
            cout << "Invalid choice." << endl;
        }

        cout << "Enter 1 to continue, 0 to exit: ";
        cin >> c;
    }
}