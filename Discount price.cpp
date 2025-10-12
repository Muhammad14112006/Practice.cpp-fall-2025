#include <iostream>
using namespace std;
int main ()
{
	float price, discount, net_price;
	
	cout<<"Enter the total price of medicine: ";
	cin>>price;
	
	if (price <= 5000)
	{discount = price * 0.05;}
	else if (price > 5000)
	{discount = price * 0.1;}
	
	net_price = price - discount;
	
	cout<<"The amount patient has to pay is: "<<net_price;
}
