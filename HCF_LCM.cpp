#include <iostream>
using namespace std;
int main ()
{
    int a, b, temp, x ,y, LCM, HCF;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    x = a;
    y = b;

    while (b != 0)
      {
         temp = b;
         b = a % b;
         a = temp;
      }

    HCF = a;
    LCM = (x * y) / HCF;

    cout<<"HCF = "<<HCF<<endl;
    cout<<"LCM = "<<LCM;

return 0;
}