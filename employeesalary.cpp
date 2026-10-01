/* muriuki donatus CT101/G/26640/25 */
#include <iostream>
using namespace std;
double calculateTax(double grossSalary) {
    double rate;

    if (grossSalary < 30000)
        rate = 0.05;      // 5% tax
    else if (grossSalary < 60000)
        rate = 0.10;      // 10% tax (30,000 – 59,999)
    else
        rate = 0.15;      // 15% tax (60,000 and above)

    return grossSalary * rate;
}

int main() {
    double grossSalary;

    cout << "Enter the employee's gross salary (KSh): ";
    cin >> grossSalary;

    double tax = calculateTax(grossSalary);
    double netSalary = grossSalary - tax;
    cout << "\nGross salary : KSh " << grossSalary << endl;
    cout << "Tax amount   : KSh " << tax << endl;
    cout << "Net salary   : KSh " << netSalary << endl;

    return 0;
}