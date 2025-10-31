#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int firstnum, secondnum;

    cout << "Enter first and second number (first number must be less than the second number): ";
    cin >> firstnum >> secondnum;

    if (firstnum > secondnum)
    {
        cout << "Error. (First number is greater than the second number)";
    }
    else if (firstnum < secondnum)
    {
        int sum = 0;
        int sqodd = 0;
        int sum_sqodd = 0;
        
        cout << "The odd numbers are: " << endl;

        for (int num = firstnum + 1; num < secondnum; num++)
        {
            if (num % 2 != 0)
            {
                cout << num << endl;
                sqodd = num * num;
                sum_sqodd += sqodd;
            }
            else if (num % 2 == 0)
            {
                sum = sum + num;
            }
            sqodd = 0; 
        }
        
        cout << "The sum of all even numbers is: " << sum << endl;

        for (float number = 1; number <= 10; number++)
        {
            cout << "\nNumber: " << number << endl;
            int square = pow(number, 2.0);
            cout << "Square: " << square << endl;
        }

        cout << "\nThe sum of Squares of odd numbers between first and second numbers are: " << sum_sqodd << endl;

        cout << "\nAll Upper-case letters are: " << endl;

        for (int i = 0; i < 26; i++)
        {
            cout << char('A' + i) << endl;
        }
        
        return 0;
    }
}
