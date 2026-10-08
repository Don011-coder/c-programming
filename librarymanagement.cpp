/*CT101/G/26640/25 MURIUKI DONATUS */
#include <iostream>
#include <string>
using namespace std;


class Book {
private:
    string title;
    string author;
    int copies;

public:
    
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter number of copies available: ";
        cin >> copies;
        cin.ignore(); 
    }

    
    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully!\n";
        } else {
            cout << "Sorry, no copies available.\n";
        }
    }

    
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
        cout << "---------------------\n";
    }
};

int main() {
    Book myBook; 

    
    myBook.inputDetails();
    myBook.borrowBook();

    myBook.displayDetails();

    return 0;
}
