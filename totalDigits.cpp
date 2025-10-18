#include <iostream>
using namespace std;
int main ()
{
    int num, count;

    cout<<"Enter a number: ";
    cin>>num;

    count = 0;
while (num > 0)
{
    num = num/10;
    count++;
}

cout<<count;

return 0;
}