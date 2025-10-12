#include <iostream>
using namespace std;
int main ()
{
	int a, vf, vi, t;
	
	cout<<"Enter intial velocity (m/s): ";
	cin>>vi;
	
	cout<<"Enter acceleration (m/s^2): ";
	cin>>a;
	
	cout<<"Enter time (s): ";
	cin>>t;
	
	vf = vi*t + 1.0/2*(a*t*t);
	
	cout<<"Final Velocity (m/s): "<<vf;
	
	return 0;
}
