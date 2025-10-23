#include <iostream>
using namespace std;
int main ()
{
    int first, second, n, k, next;

    cout<<"Enter the nth number: ";
    cin>>n;
    first = 0;
    second = 1;
    k = 1;
    while (k <= n)
    {
        cout<<first<<" ";

        next = first + second;
        first = second;
        second = next;
        k++;
    }

    return 0;
}