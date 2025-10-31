#include <iostream>
#include <cmath>   
using namespace std;
int main() 
{
    double a, b, t;
    cout << "Enter time for first dish (a): ";
    cin >> a;
    cout << "Enter extra time for each following dish (b): ";
    cin >> b;
    cout << "Enter total available time (t): ";
    cin >> t;
    double A = b / 2.0;
    double B = a - (b / 2.0);
    double C = -t;
    double discriminant = B * B - 4 * A * C;
    double n = (-B + sqrt(discriminant)) / (2 * A);
    int dishes = (int)n;
    cout << "\nBianca can prepare " << dishes << " dishes." << endl;
    return 0;
}
