#include <iostream>
using namespace std;
int main ()
{
    int word[100];
    bool flag = true;

    cout<<"Enter a word: ";
    cin>>word;
    
    int length = 0;

    while (word[length]  != '/0' )
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word [length - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout<<"It is not a Palindrom.";

    }
    else if (flag == true)
    {
        cout<<"It is a Palindrom.";
    }

    return 0;
}