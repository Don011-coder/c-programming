/*muriuki donatus CT101/G/26640/25 */
#include <iostream>
using namespace std;

int main() {
    string studentName; 
    double marks;        
    char grade;          
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks: ";
    cin >> marks;
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    } else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    } else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    } else if (marks >= 0 && marks < 40) {
        grade = 'E';
    } else {
        cout << "\nInvalid marks entered. Please enter a value between 0 and 100.\n";
        return 1;
    }
    cout << "\n========================================\n";
    cout << "           STUDENT GRADE REPORT\n";
    cout << "========================================\n";
    cout << "Student Name : " << studentName << endl;
    cout << "Marks        : " << marks << endl;
    cout << "Grade        : " << grade << endl;
    cout << "========================================\n";

    return 0;
}