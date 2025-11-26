#include <iostream>
using namespace std;
int largest (int a, int b, int c);
int a, b, c;
int main ()
{
    cout<<"Enter a: ";
    cin>>a;
    cout<<"\nEnter b: ";
    cin>>b;
    cout<<"\nEnter c: ";
    cin>>c;

    int biggest = largest (a,b,c);

    cout<<"\nThe largest value is: "<<biggest;

    return 0;
}

int largest (int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
}