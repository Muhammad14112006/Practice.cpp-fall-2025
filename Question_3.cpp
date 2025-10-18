#include <iostream>
using namespace std;
int main ()
{
    float length, width, area, perimeter;

    cout<<"Enter the length of the rectangle: ";
    cin>>length;

    cout<<"Enter the width of the rectangle: ";
    cin>>width;

    perimeter = 2 * (length + width);
    area = length * width;

    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<perimeter<<endl;

    if (area > perimeter)
    {
        cout<<"Area is greater than the perimeter.";
    }
    else if (area < perimeter)
    {
        cout<<"Area is smaller than the perimeter.";
    }
    else if (area = perimeter)
    {
        cout<<"Both Area and Perimeter are equal";
    }

    return 0;
}