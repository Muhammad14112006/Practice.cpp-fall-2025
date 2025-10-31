#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int firstnum, secondnum;

    cout<<"Enter first and second number (first number must be less than the second number): ";
    cin>>firstnum>>secondnum;

    if (firstnum > secondnum)
    {
        cout<<"Error. (First number is greater than the second number)";
    }
    else if (firstnum < secondnum)
    {
        int n = 0;
        int sum = 0;
        int sqodd = 0;
        int sum_sqodd = 0;
        int num = firstnum + 1;
        cout<<"The odd numbers are: "<<endl;
        while(num < secondnum)
        {
            if (num % 2 != 0)
            {
                cout<<num<<endl;
                sqodd = num * num;
                sum_sqodd += sqodd;
            }
            else if (num % 2 == 0)
            {
                sum = sum + num;
            }
            sqodd = 0;
            num++;
        }
        cout<<"The sum of all even numbers is: "<<sum<<endl;

        float number = 1;
        while (number <= 10)
        {
            cout<<"\nNumber: "<<number<<endl;
            int square = pow(number, 2.0);
            cout<<"Square: "<<square<<endl;
            number++;
        }

        cout<<"\nThe sum of Squares of odd numbers between first and second numbers are: "<<sum_sqodd<<endl;

        cout<<"\nAll Upper-case letters are: "<<endl;
        int i = 0;
        while (i < 26)
        {
            cout<<char('A' + i)<<endl;
            i++;
        }
      return 0;
    }

}