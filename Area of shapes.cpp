#include <iostream>
using namespace std;
int main ()
{
	string type;
	float side, length, width, pi, radius, base, height, area;
	
	pi = 3.1415;
	
	cout<<"Type of Shape: ";
	cin>>type;
	
	if (type == "square")
	{cout<<"Enter the measure of the side of square: ";
	cin>>side;
	
	area = side * side;
	
	cout<<"The area of the square is: "<<area;}
	
	else if (type == "rectangle")
	{cout<<"Enter length and width: ";
	cin>>length>>width;
	
	area = length * width;
	
	cout<<"The area of the rectangle is: "<<area;}
	
	else if (type == "circle")
	{cout<<"Enter radius of the circle: ";
	cin>>radius;
	
	area = pi * (radius * radius);
	
	cout<<"The area of the circle is: "<<area;}
	
	else if (type == "triangle")
	{cout<<"Enter the length of base and height of the triangle: ";
	cin>>base>>height;
	
	area = 1 / 2.0 * (base * height);
	
	cout<<"The area of the triangle is: "<<area;}
	
	return 0;
}
