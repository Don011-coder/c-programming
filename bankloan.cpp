/*muriuki donatus CT101/G/26640/25 */
#include <iostream>
#include <string>
using namespace std;


class Customer {
protected:
    string name;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};


class Loan : public Customer {
private:
    double loanAmount;
    double interestRate;

public:
    Loan(string n, double amount, double rate) {
        setName(n);              
        loanAmount = amount;
        interestRate = rate;
    }

    double getLoanAmount() { return loanAmount; }
    double getInterestRate() { return interestRate; }
};


class HomeLoan : public Loan {
private:
    double propertyValue;

public:
    HomeLoan(string n, double amount, double rate, double propValue)
        : Loan(n, amount, rate) {   
        propertyValue = propValue;
    }

    double getPropertyValue() { return propertyValue; }
};

int main() {
    HomeLoan h("Ali Khan", 250000.0, 5.5, 400000.0);

    cout << "Customer Name : " << h.getName() << endl;
    cout << "Loan Amount   : " << h.getLoanAmount() << endl;
    cout << "Interest Rate : " << h.getInterestRate() << "%" << endl;
    cout << "Property Value: " << h.getPropertyValue() << endl;

    return 0;
}