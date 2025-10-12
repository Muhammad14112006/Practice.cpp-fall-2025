#include <iostream>
using namespace std;
int main ()
{
	int speed;
	
	cout<<"Enter the speed of the vehicle: ";
	cin>>speed;
	
	if (speed > 100)
	{cout<<"HALT.... YOU WILL BE CHALLANED !!!";}
	else if (speed <= 100)
	{cout<<"PERFECT! YOU ARE GOING GOOD.";}
	
	return 0;
}
