#include <iostream>
using namespace std;
int main()
{
    int length, first, second, next, i;

    cout<<"Enter the length of Fibonacci Series: ";
    cin>>length;

    first = 0;
    second = 1;

    for (i = 1; i <= length; i++)
    {   
     cout<<first<<" ";
     next = first + second;
     first = second;
     second = next;
    }
    
    return 0;
}
