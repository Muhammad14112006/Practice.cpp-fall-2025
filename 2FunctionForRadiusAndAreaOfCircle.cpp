#include <iostream>
using namespace std;
double GetRadius();
double GetArea(double radius);
int main ()
{
   float r =  GetRadius();
   float a =  GetArea(r);

   cout<<"Area = "<<a;

    return 0;
}

double GetRadius()
{
    double radius;
    cout<<"Enter Radius: ";
    cin>>radius;
    cout<<endl;

    return radius;
}

double GetArea(double radius)
{
    double area = 3.14159 * radius * radius;

    return area;
}