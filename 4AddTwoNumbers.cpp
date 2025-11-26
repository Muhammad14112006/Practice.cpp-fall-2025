#include <iostream>
using namespace std;
int Add(int a, int b);
int a,b;
int main()
{
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    int sum = Add(a,b);
    cout<<"Sum = "<<sum;
}

int Add(int a, int b)
{
    return a+b;
}
