#include <iostream>
using namespace std;
int main ()
{
	int s, min, hrs, sec;
	
	cout<<"Enter the elapsed time in seconds: ";
	cin>>s;
	
	hrs = s/3600;
	s = s%3600;
	min = s/60;
	sec = s%60;
	
	cout<<hrs<<" : "<<min<<" : "<<sec;
	
	return 0;
}
