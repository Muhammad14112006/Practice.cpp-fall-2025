#include <iostream>
using namespace std;
int main ()
{
int a,x1, x2, x3, x4, sum, rem;
a=9898;

x1 = a/1000;
rem = a%1000;

x2 = rem/100;
rem = rem%100;

x3 = rem/10;
 
x4 = rem%10;

sum = x1+x2+x3+x4;

cout<<"The sum of 4 digits = "<<sum;

return 0;

}