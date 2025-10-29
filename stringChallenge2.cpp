#include <iostream>
using namespace std;
int main ()
{
    char word [100];
    cout<<"Enter the word: ";
    cin>>word;

    for (int i = 0; word [i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            if (word[i] == 'Z')
            {
                word[i] = 'A';
            }
            else
            {
                word[i] = word[i] + 1;
            }
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            if (word[i] == 'z')
            {
                word[i] = 'a';
            }
            else
            {
                word[i] = word[i] + 1;
            }
        }
    }
    
    cout<<"The New Word: "<<word;

    return 0;
}