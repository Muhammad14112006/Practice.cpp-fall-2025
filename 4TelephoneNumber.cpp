#include <iostream>
#include <cctype>
using namespace std;
int main ()
{
    string phone;
    char letter, choice;
    int count, i;

    do
    {
        cout<<"Enter the telephone number in letters: ";
        getline (cin, phone);

        count = 0;

        for (i = 0; i < phone.length() && count < 7; i++)
        {
            letter = phone[i];

            if (isalpha(letter))
            {
                count++;

                if (count == 4)
                {
                    cout<<"-";
                }

                switch (tolower(letter))
                {
                    case 'a': case 'b': case 'c':
                    cout<<2;
                    break;

                    case 'd': case 'e': case 'f':
                    cout<<3;
                    break;

                    case 'g': case 'h': case 'i':
                    cout << 4;
                    break;

                    case 'j': case 'k': case 'l':
                    cout << 5;
                    break;

                    case 'm': case 'n': case 'o':
                    cout << 6;
                    break;

                    case 'p': case 'q': case 'r': case 's':
                    cout << 7;
                    break;

                    case 't': case 'u': case 'v':
                    cout << 8;
                    break;

                    case 'w': case 'x': case 'y': case 'z':
                    cout << 9;
                    break;
                }
            }
            else if (letter != ' ')
            {
                cout<<"Invalid input.";
            }
        }

        cout<<endl;

        cout<<"Do you want to continue (Y/N) ?";
        cin>>choice;

    }
    while (choice == 'Y' || choice == 'y');

    return 0;
}