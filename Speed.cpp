#include <iostream>
using namespace std;
int main ()
{
	int speed;
	
	cout<<"Enter Speed: ";
	cin>>speed;
	
	if (speed > 0 && speed <= 10 )
	{cout<<"Slow";}
	else if (speed > 10 && speed <= 50)
	{cout<<"Average";}
	else if (speed > 50 && speed <= 150)
	{cout<<"Fast";}
	else if (speed > 150 && speed <= 1000)
	{cout<<"Ultra Fast";}
	else if (speed > 1000)
	{cout<<"Extremely Fast";}
	
	return 0;
}
