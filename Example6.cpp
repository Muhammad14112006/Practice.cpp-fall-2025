#include <iostream>
using namespace std;
int main ()
{
    int num [10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the number: "<<endl;
        cin>>num[i];
    }

    int number;

    cout<<"Enter a value you wanna find: "<<endl;
    cin>>number;

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (number == num [i])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout<<"The number "<<number<<" is in the array.";
    }
    else
    {
        cout<<"Not found.";
    }

    return 0;
}