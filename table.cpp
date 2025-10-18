#include <iostream>
using namespace std;
int main()
{
    int number, n, table;

    cout<<"Enter a number: ";
    cin>>number;

    for(n = 1; n <= 10; n++)
    {
       table = number * n;

    cout<<number<<" * "<<n<<" = ";
    cout<<table<<endl;
    }
    return 0;
}
