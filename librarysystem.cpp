/*muriuki donatus CT101/G/26640/25 */
#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};


class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books) {
        setName(n);            
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() { return memberID; }
    int getBooksBorrowed() { return booksBorrowed; }
};


class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {   
        membershipFee = fee;
    }

    double getMembershipFee() { return membershipFee; }
};

int main() {
    PremiumMember pm("Alice Johnson", 101, 3, 49.99);

    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}