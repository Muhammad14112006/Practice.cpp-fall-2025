#include <iostream>
using namespace std;
int main ()
{
	float vprice, fprice, kgv, kgf, earningrps, vearning, fearning;
	
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vprice;
	
	cout<<"Enter fruits price per kilogram (in coins): ";
	cin>>fprice;
	
	cout<<"Enter total kilograms of vegetables: ";
	cin>>kgv;
	
	cout<<"Enter total kilograms of fruits: ";
	cin>>kgf;
	
	vearning = (1/1.94)*kgv*vprice;
	fearning = (1/1.94)*kgf*fprice;
	
	earningrps = vearning + fearning;
	
	cout<<"Total earning in rupees = "<<earningrps;
	
	return 0;
}
