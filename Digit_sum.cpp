#include <iostream>
using namespace std;
int main ()
{
    int num, sum, rem;

    cout<<"Enter a number: ";
    cin>>num;

    sum = 0;
    while(num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    cout<<"Sum = "<<sum;

    return 0;
}