#include <iostream>
using namespace std;
int main ()
{
	string country;
	float ticket_price, discounted_price, ID, OD, IP, OP;
	
	cout<<"Enter the name of your country: ";
	cin>>country;
	
	cout<<"Enter the ticket price: ";
	cin>>ticket_price;
	
	ID = 0.1 * ticket_price;
	OD = 0.05 * ticket_price;
	
	IP = ticket_price - ID;
	OP = ticket_price - OD;
	
	if (country == "Ireland")
	{cout<<"The ticket price is: "<<IP<<"$";}
	else 
	{cout<<"The ticket price is: "<<OP<<"$";}
	
	return 0;
}
