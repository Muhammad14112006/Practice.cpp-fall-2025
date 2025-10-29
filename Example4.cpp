#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    int numbers [5];

    cout<<"Enter 5 numbers: "<<endl;

    for (i = 0; i < 5; i++)
    {
        cin>>numbers[i];
    }

    cout<<"The numbers are: ";

    for (j = 0; j < 5; j++)
    {
        cout<<numbers [j]<<" ";
    }

    return 0;
}