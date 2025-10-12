#include <iostream>
using namespace std;
int main ()
{
	float V, I, P;
	cout<<"Enter voltage (in volts) : ";
	cin>>V;
	
	cout<<"Enter current (in amperes) : ";
	cin>>I;
	
	P = V*I;
	
	cout<<"The power is "<< P <<" watts";
	
	return 0;
	
}
