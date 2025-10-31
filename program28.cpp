#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    double N, R, I, M;
    cout << "Enter total number of units: ";
    cin >> N;
    cout << "Enter rent to occupy all units: ";
    cin >> R;
    cout << "Enter increase in rent that results in one vacancy: ";
    cin >> I;
    cout << "Enter maintenance cost per occupied unit: ";
    cin >> M;
    double x = (N / 2.0) - ((R - M) / (2.0 * I));  
    double occupied = N - x;                     
    double rent = R + I * x;                    
    double profit = occupied * (rent - M);         
    cout << fixed << setprecision(2);
    cout << "\nTo maximize profit:\n";
    cout << "Units to rent: " << occupied << endl;
    cout << "Rent per unit: $" << rent << endl;
    cout << "Maximum profit: $" << profit << endl;
    return 0;
}
