#include <iostream>
using namespace std;
int main ()
{
    int i, num, sum;
    float average;

    sum = 0;

    for (i = 1; i <= 5; i++)
    {
        cout<<"Enter the number: ";
        cin>>num;

        sum = sum + num;
    }

    average = sum / 5;

    cout<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<average<<endl;

    return 0;
}