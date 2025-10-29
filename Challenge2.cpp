#include <iostream>
using namespace std; 
int main ()
{
    int num [10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter a number: ";
        cin>>num[i];
    }

    int smallest = num [0];

    for (int i = 0; i < 10; i++)
    {
        if (num [i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout<<"Smallest = "<<smallest;

    return 0;
}