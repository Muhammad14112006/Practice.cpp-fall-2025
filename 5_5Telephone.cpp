#include <iostream>
using namespace std;
int main ()
{
    int num, digit;
    char letter;

    const char SENTINAL = '#';

    cout<<"Program to convert Letters to corresponding digits: "<<endl;

    cout<<"Enter an upper case letter: ";
    cin>>letter;

    while (letter != '#')
    {
        cout<<"Letter: "<<letter<<endl;
        num = static_cast<int>(letter) - static_cast<int>('A');

        if (num >= 0 && num < 26)
        {
            digit = (num / 3) + 2;

            if (digit <= 9)
            {
                cout<<"Corresponding telephone digit = "<<digit<<endl;
            }
            else if (digit > 9)
            {
                digit = 9;
                cout<<"Corresponding telephone digit = "<<digit<<endl;
            }
        }
        else
        {
            cout<<"Invalid input";
        }

        cout<<"To stop the program, Pres # key."<<endl;
        cout<<"\nEnter another uppercase letter to find its corresponding digit: ";
        cin>>letter;
    }

    return 0;
}
