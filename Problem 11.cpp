#include <iostream>
using namespace std;
int main ()
{
	float gallons, mpg, miles_drivable;
	
	cout<<"Enter the fuel capacity in gallons: ";
	cin>>gallons;
	
	cout<<"Mileage: ";
	cin>>mpg;
	
	miles_drivable = mpg * gallons;
	
	cout<<"The no. of miles drivable in one fuel refill are: "<<miles_drivable;
	return 0;
}
