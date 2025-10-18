#include <iostream>
using namespace std;
int main ()
{
    int num, digit, count, rem, x;

    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<"Enter the digit whose frequency you want: ";
    cin>>digit;

    count = 0;
    while (num > 0)
    {
        num = num / 10;
        rem = num % 10;
        if (rem == digit)
        {
            count = count + 1;
        }
    }
    cout<<count;

    return 0;
}