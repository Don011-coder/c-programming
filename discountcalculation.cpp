/* muriuki donatus CT101/G/26640/25 */
#include <iostream>
using namespace std;
double calculateDiscount(double purchaseAmount) {
    double rate;

    if (purchaseAmount < 5000)
        rate = 0.05;      // 5% discount
    else if (purchaseAmount < 10000)
        rate = 0.10;      // 10% discount (5,000 – 9,999)
    else
        rate = 0.15;      // 15% discount (10,000 and above)

    return purchaseAmount * rate;
}

int main() {
    double purchaseAmount;

    cout << "Enter the purchase amount (KSh): ";
    cin >> purchaseAmount;

    double discount = calculateDiscount(purchaseAmount);
    double finalAmount = purchaseAmount - discount;

    cout << "\nPurchase amount : KSh " << purchaseAmount << endl;
    cout << "Discount amount : KSh " << discount << endl;
    cout << "Final amount    : KSh " << finalAmount << endl;

    return 0;
}