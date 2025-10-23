#include <iostream>
using namespace std;
int main ()
{
    int sum, num;

    sum = 0;
    while(cin)
    {
        cout<<"\nEnter a number: ";
        cin>>num;
        sum = sum + num;
        cout<<"Sum = "<<sum<<endl;
    }

    return 0;
}