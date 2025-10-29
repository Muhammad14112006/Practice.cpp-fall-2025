#include <iostream>
using namespace std;
int main ()
{
    int num [10];
    int length = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < length; i++)
    {
        cout<<"Enter a number: "<<endl;
        cin>>num [i];
    }
    int largest = num[0];
    for (int i = 0; i < length; i++)
    {
        if (num[i] > largest )
        {
            largest = num[i];
        }
    }
    
    cout<<"The largest value: "<<largest;

    return 0;
}