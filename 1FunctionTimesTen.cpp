#include <iostream>
using namespace std;
void TimesTen(int number);
int main ()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;

    TimesTen(n);

    return 0;
}

void TimesTen(int number)
{
    int result = number * 10;

    cout<<"Result = "<<result;
}