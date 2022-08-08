#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
    long accountNumber;

protected:
    string name;

public:
    const string accountType;
    Account(long accNumber, string accHolder, const string &accType) : accountNumber(accNumber),
                                                                       name(accHolder), accountType(accType)
    {

        cout << "Account's constructor has been called" << endl;
    }
    ~Account()
    {
        cout << endl
            << "Account Object Destroyed";
    }
    const long getAccNumber() const
    {
        return accountNumber;
    }
    void DisplayDetails()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
    }
};
class CurrentAccount : public Account
{
private:
    double balance;

public:
    CurrentAccount(long accNumber, const string &accHolder, string accountType, double accBalance)
        : Account(accNumber, accHolder, accountType), balance(accBalance)
    {
        cout << "CurrentAccount's constructor has been called" << endl
             << endl;
    }
    void deposit_currbal()
    {
        float deposit;
        cout << "Enter amount to Deposit : ";
        cin >> deposit;
        balance = balance + deposit;
    }
    void withdraw_()
    {
        float withdraw;
        cout << "Enter amount to Withdraw : ";
        cin >> withdraw;
        if (balance >= withdraw)
        {
            balance = balance - withdraw;
        }
        else
        {
            cout << "You dont have enough balance" << endl;
        }
    }

    void Display()
    {
        name = "Dummy"; // can change protected data member of Base class
        Account::DisplayDetails();
        cout << "Account Balance: " << balance << endl
             << endl;
    }
    ~CurrentAccount()
    {
        cout << endl
             << "CurrentAccount Object Destroyed";
    }
};
int main()
{
    CurrentAccount currAcc(1020304050, "Alisha", "Current Account", 80000);
    currAcc.deposit_currbal();
    currAcc.Display();
    currAcc.withdraw_();
    currAcc.Display();
    return 0;
}