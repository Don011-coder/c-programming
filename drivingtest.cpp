/*muriuki donatus CT101/G/26640/25 */
#include <iostream>
using namespace std;

int main() {
    
    string studentName;     
    double theoryMarks;     
    double practicalMarks;  
    double averageScore;    

    
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    
    averageScore = (theoryMarks + practicalMarks) / 2.0;
    string result;
    if (averageScore >= 50) {
        result = "PASSED";
    } else {
        result = "FAILED";
    }
    cout << fixed ;
    cout << "\n========================================\n";
    cout << "       DRIVING TEST RESULT SLIP\n";
    cout << "========================================\n";
    cout << "Student Name      : " << studentName << endl;
    cout << "Theory Marks      : " << theoryMarks << endl;
    cout << "Practical Marks   : " << practicalMarks << endl;
    cout << "Average Score     : " << averageScore << endl;
    cout << "Result            : " << result << endl;
    cout << "========================================\n";

    return 0;
}