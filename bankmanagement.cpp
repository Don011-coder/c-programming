/*muriuki donatus CT101/G/26640/25 */
#include <iostream>
#include <string>
using namespace std;

class AccountHolder {
protected:
    string name;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};

class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int accNo, double bal) {
        setName(n);              
        accountNumber = accNo;
        balance = bal;
    }
    int getAccountNumber() { return accountNumber; }
    double getBalance() { return balance; }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string n, int accNo, double bal, double rate)
        : BankAccount(n, accNo, bal) {
        interestRate = rate;
    }
    double getInterestRate() { return interestRate; }
};

int main() {
    SavingsAccount acc("Alice Johnson", 101234, 5000.50, 3.5);

    cout << "Name:           " << acc.getName() << endl;
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance:        " << acc.getBalance() << endl;
    cout << "Interest Rate:  " << acc.getInterestRate() << "%" << endl;

    return 0;
}