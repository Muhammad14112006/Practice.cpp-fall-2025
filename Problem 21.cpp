#include <iostream>
using namespace std;
int main()
 {
    double M1, M2, d, F;
    const double k = 6.67e-8;  

    cout << "Enter mass of first body (g): ";
    cin >> M1;

    cout << "Enter mass of second body (g): ";
    cin >> M2;

    cout << "Enter distance between the bodies (cm): ";
    cin >> d;

    F = k * (M1 * M2) / (d * d);

    cout << "The gravitational force between the bodies is: " << F << " N" << endl;

    return 0;
}
