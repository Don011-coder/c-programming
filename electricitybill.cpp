/* muriuki donatus CT101/G/26640/25 */
#include <iostream>
using namespace std;
double calculateBill(int units) {
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    double bill = calculateBill(units);
    cout << "\nUnits consumed : " << units << endl;
    cout << "Total bill     : KSh " << bill << endl;

    return 0;
}