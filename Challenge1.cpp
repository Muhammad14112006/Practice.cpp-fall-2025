#include <iostream>
using namespace std;
int main ()
{
    int num [10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter a number: ";
        cin>> num [i];
    }

    for (int j = 9; j >= 0; j--)
    {
        cout<<num[j]<<" ";
    }

    return 0;
}