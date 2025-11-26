#include <iostream>
using namespace std;
bool isEven(int num);
int main ()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool number = isEven(n);
    cout<<"The number is "<<boolalpha<<number;

    return 0;
}

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}