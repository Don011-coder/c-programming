/* CT101/G/26640/25 MURIUKI DONATUS */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    cout << "----- Employee Bonus System -----\n";

    
    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter details for Employee " << i << ":\n";
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Basic Salary: ";
        cin >> basicSalary;

        
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        
        cout << "\n--- Employee Report ---\n";
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus (5%): " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
        cout << "------------------------\n";
    }

    return 0;
}
