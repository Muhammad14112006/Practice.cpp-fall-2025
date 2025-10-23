#include <iostream>
using namespace std;
int main()
{
    int rows, i, j ,k;

    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (k = 1; k <= 2 *(rows - i) + 1; k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}