#include <iostream>
using namespace std;
int main ()
{
    char ch[100];

    cout<<"Enter a word: ";
    cin>>ch;

    int count = 0;

    for (int i = 0; ch[i]!= '\0'; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
        {
            count = count + 1;
        }
    }

    cout<<"Number of Vowels: "<<count;

    return 0;
}