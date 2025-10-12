#include <iostream>
using namespace std;
int main ()
{
	float t1, t2;
	
	cout<<"Temperature City 1: ";
	cin>>t1;
	
	cout<<"Temperature City 2: ";
	cin>>t2;
	
	if ((t1 - t2)> 10 || (t2-t1) > 10)
	{cout<<"Difference is Too Big";}
	
	return 0;
}
