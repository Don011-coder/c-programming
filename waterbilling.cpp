/*CT101/G/26640/25 MURIUKI DONATUS */
#include <iostream>
#include <string>
using namespace std;


void getCustomerDetails(string &name, int &units) {
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter number of units consumed: ";
    cin >> units;
}

double calculateBill(int units, double ratePerUnit) {
    return units * ratePerUnit;
}


double applyDiscount(double bill, int units) {
    if (units > 100) {
        return bill * 0.9; // 10% discount
    }
    return bill;
}


void displayBill(string name, int units, double billBeforeDiscount, double finalBill) {
    cout << "\n----- Water Bill -----\n";
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill (Before Discount): " << billBeforeDiscount << endl;
    if (units > 100) {
        cout << "Discount Applied: 10%" << endl;
    } else {
        cout << "Discount Applied: None" << endl;
    }
    cout << "Final Amount Payable: " << finalBill << endl;
    cout << "----------------------\n";
}

int main() {
    string customerName;
    int unitsConsumed;
    double ratePerUnit = 5.0; 

    
    getCustomerDetails(customerName, unitsConsumed);

    
    double billBeforeDiscount = calculateBill(unitsConsumed, ratePerUnit);

    
    double finalBill = applyDiscount(billBeforeDiscount, unitsConsumed);


    displayBill(customerName, unitsConsumed, billBeforeDiscount, finalBill);

    return 0;
}
