#include <iostream>
using namespace std;
int main ()
{
	int BS, HR, MA, AR, GS;
	
	BS = 150000;
	
	HR = 0.25*150000;
	
	MA = 0.3*150000;
	
	AR = 0.15*150000;
	
	GS = BS + HR + MA + AR;
	
	cout<<"The gross salary = "<<GS;
	
	return 0;
	
}
