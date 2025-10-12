#include <iostream>
using namespace std;

int main() {
    double originalPrice, markupPercent, taxRate;
    double sellingPrice, salesTax, finalPrice;

    cout << "Enter original price of the item: ";
    cin >> originalPrice;

    cout << "Enter markup percentage: ";
    cin >> markupPercent;

    cout << "Enter sales tax rate: ";
    cin >> taxRate;

    sellingPrice = originalPrice + (originalPrice * markupPercent / 100.0);
    
    salesTax = sellingPrice * taxRate / 100.0;

    finalPrice = sellingPrice + salesTax;

    cout << "\nOriginal Price: " << originalPrice;
    cout << "\nMarkup Percentage: " << markupPercent << "%";
    cout << "\nSelling Price (before tax): " << sellingPrice;
    cout << "\nSales Tax Rate: " << taxRate << "%";
    cout << "\nSales Tax: " << salesTax;
    cout << "\nFinal Price: " << finalPrice << endl;

    return 0;
}
