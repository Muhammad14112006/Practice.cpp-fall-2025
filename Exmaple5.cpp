#include <iostream>
using namespace std;
int main()
{
    int num [] = {10, 20, 30, 40, 50, 60};
    

    int sum = 0;
    int average = 0;
    int length = sizeof(num) / sizeof (num[0]);

    cout<<"The numbers are: "<<endl;

    for (int i = 0; i < length; i++)
    {
        cout<<num [i]<<" "<<endl;
        sum = sum + num [i];
    }

    cout<<"The sum = "<<sum<<endl;
   
        average = sum / length;

    cout<<"The average = "<<average;

    return 0;
}