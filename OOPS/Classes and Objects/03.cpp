#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string owner;
    float balance;

public:
    void set(float b, string name)
    {
        balance = b;
        owner = name;
    }
    void get()
    {
        cout << "Owner Name is: " << owner << endl;
        cout << owner << " Initial Balance is: " << balance << " Rs " << endl;
    }
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        else
        {
            cout << "------ Deposit Successfull!! ------" << endl;
            balance += amount;
        }
    }
    void withdraw(int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid Amount Entered" << endl;
        }

        else if (amount > balance)
        {
            cout << "Invalid Balance" << endl;
        }
        else
        {
            cout << "------ Withdraw Successfull ------" << endl;
            balance -= amount;
        }
    }

    void show()
    {
        cout << "Balance is " << balance << " Rs " << endl;
    }
};

int main()
{
    int deposit_amount, withdraw_amount;
    BankAccount b1;
    b1.set(2500, "Hashir");
    b1.get();
    cout << endl;

    int choice = 0;
    do
    {
        cout << "---------------------------- Banking System -----------------------------" << endl;
        cout << "Select 1 option: " << endl;
        cout << "(1) Deposit Money" << endl;
        cout << "(2) Withdraw Money" << endl;
        cout << "(3) Show Balance " << endl;
        cout << "(4) Exit" << endl;
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "Enter the amount you want to Deposit: ";
            cin >> deposit_amount;
            b1.deposit(deposit_amount);
            cout << endl;
            break;
        case 2:
            cout << "Enter amount you want to withdraw: ";
            cin >> withdraw_amount;
            b1.withdraw(withdraw_amount);
            cout << endl;
            break;
        case 3:
            b1.show();
            break;
        case 4:
            cout << "Thank you for using this System" << endl;
            cout << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 4);
    cout << endl;
    return 0;
}