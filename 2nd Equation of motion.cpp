#include <iostream>
using namespace std;
int main ()
{
	float vf, vi, a, t;
	
	cout<<"Enter Initial Velocity ";
	cin>>vi;
	
	cout<<"Enter Acceleration ";
	cin>>a;
	
	cout<<"Enter time ";
	cin>>t;
	
	vf = (vi*t) + 1/2.0*(a*t*t);
	
	cout<<" The Final velocity is "<<vf;
	
	return 0;
	
}
