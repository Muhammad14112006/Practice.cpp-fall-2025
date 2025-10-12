#include <iostream>
using namespace std;
int main()
 {
    const double METRIC_TON = 2205.0;
    double bagCapacity, numberOfBags;

    cout << "Enter the amount of rice (in pounds) one bag can hold: ";
    cin >> bagCapacity;

    numberOfBags = METRIC_TON / bagCapacity;
    
    cout << "Number of bags needed to store one metric ton of rice: "<< numberOfBags << endl;

    return 0;
}

