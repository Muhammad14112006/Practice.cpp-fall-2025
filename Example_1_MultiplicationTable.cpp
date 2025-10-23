#include <iostream>
using namespace std;
int main ()
{
    int i, j, product;

    for (i = 0; i <= 5; i++)
    {
        for(j = 0; j <= 10; j++)
        {
            product = i * j;
            cout<<i<<" * "<<j<<" = "<<product<<endl;
        }

        cout<<endl;
    }

    return 0;
}