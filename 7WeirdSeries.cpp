#include <iostream>
using namespace std;
int main ()
{
    long long n;

    cout<<"Enter a positive integer: ";
    cin>>n;

    int t = 0;
    int sign = 1;

    while (n < 0)
    {
        int digit = n % 10;
        t += sign * digit;
        sign = -sign;
        n = n / 10;
    }

    if (t % 11 == 0)
    {
        cout<<"The number n is divisible by 11.";
    }
    else 
    {
        cout<<"The number n is NOT divisible by 11.";
    }

    return 0;
}