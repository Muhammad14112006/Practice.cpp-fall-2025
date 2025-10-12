#include <iostream>
using namespace std;
int main ()
{
	int hours,seconds;
	cout<< "Time in hours = ";
	cin>> hours;
	seconds= 3600*hours;
	cout<< hours<<" hours is equivalent " << seconds <<" seconds";
	return 0;
}
