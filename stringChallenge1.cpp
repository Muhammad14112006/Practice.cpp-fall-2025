#include <iostream>
using namespace std;
int main ()
{
    char ch[] = "hello";

    int length = sizeof(ch);
    for (int i = (length - 1); i >= 0; i--)
    {
        cout<<ch[i];
    }

    return 0;
}