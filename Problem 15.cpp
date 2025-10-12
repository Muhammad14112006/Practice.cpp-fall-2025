#include <iostream>
using namespace std;
int main ()
{
	double pi, radius, price, area, price_per_square_inch;
	
	pi = 3.141593;
	
	cout<<"Enter the radius of Pizza: ";
	cin>>radius;
	
	cout<<"Enter the price of Pizza: ";
	cin>>price;
	
	area = pi * (radius * radius);
	
	price_per_square_inch = price/area;
	
	cout<<"The price of Pizza per square inch is: "<<price_per_square_inch;
	
	return 0;
}
