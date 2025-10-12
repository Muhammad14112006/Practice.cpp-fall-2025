#include <iostream>
using namespace std;
int main()
 {
    const double SERVICE_RATE = 0.015; 
    int numShares;
    double purchasePrice, sellingPrice;
    double amountInvested, purchaseCharge, totalPurchase;
    double amountFromSelling, sellingCharge, netReceived;
    double profitOrLoss;

    cout << "Enter number of shares sold: ";
    cin >> numShares;

    cout << "Enter purchase price of each share: ";
    cin >> purchasePrice;

    cout << "Enter selling price of each share: ";
    cin >> sellingPrice;

    amountInvested = numShares * purchasePrice;
    purchaseCharge = amountInvested * SERVICE_RATE;
    totalPurchase = amountInvested + purchaseCharge;

    amountFromSelling = numShares * sellingPrice;
    sellingCharge = amountFromSelling * SERVICE_RATE;
    netReceived = amountFromSelling - sellingCharge;

    profitOrLoss = netReceived - totalPurchase;

    cout << "\nAmount invested: $" << amountInvested;
    cout << "\nTotal service charges (buy + sell): $"<< (purchaseCharge + sellingCharge);
    cout << "\nAmount received after selling: $" << netReceived;

    if (profitOrLoss > 0)
        cout << "\nYou gained: $" << profitOrLoss << endl;
    else if (profitOrLoss < 0)
        cout << "\nYou lost: $" << -profitOrLoss << endl;
    else
        cout << "\nNo profit, no loss." << endl;

    return 0;
}
