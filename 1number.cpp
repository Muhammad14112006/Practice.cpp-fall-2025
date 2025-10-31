#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int num, digit, sum, temp, length, i;

    cout<<"Enter an integer: ";
    cin>>num;

    sum = 0;
    temp = num;
    length = 0;

    while (temp != 0)
    {
        temp = temp / 10;
        length++;
    }

    temp = num;

    cout<<"Digit: ";
    for (i = length; i > 0; i--)
    {
        int power = static_cast<int>(round(pow(10, i - 1)));
        digit = temp / power;
        cout << digit << " ";
        temp -= digit * power;
        sum += digit;
    }

    cout<<"sum = "<<sum;

    return 0;
}