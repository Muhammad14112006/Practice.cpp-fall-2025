#include <iostream>
#include <cctype>
using namespace std;
int main ()
{
    int num1, num2, i,  difference, count1, count2;

    cout<<"Enter two integers: ";
    cin>>num1>>num2;

    if (num1 > num2)
    {
        count1 = 0;
        count2 = 0;

        for (i = num2; i <= num1; i++)
        {
            if (i % 3 == 0)
            {
                count1++;
            }
            else if (i % 5 == 0)
            {
                count2++;
            }
        }
    }
    else if (num2 > num1)
    {
        count1 = 0;
        count2 = 0;

        for (i = num1 ; i <= num2; i++)
        {
            if (i % 3 == 0)
            {
                count1++;
            }
            if (i % 5 == 0)
            {
                count2++;
            }
        }
    }

    cout<<"No. of integers which are multiples of 3: "<<count1<<endl;
    cout<<"No. of integers which are multiiple of 5: "<<count2;

    return 0;
}