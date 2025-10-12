#include <iostream>
using namespace std;
int main ()
{
	int Pf, n, Pn;
	cout<<" Enter the current world population: ";
	cin>>Pn;
	
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>n;
	
	Pf = (n*12)*30 + Pn;
	
	cout<<"The population in three decades will be: "<<Pf;
	
	return 0;
}
