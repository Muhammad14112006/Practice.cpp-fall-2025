#include <iostream>
using namespace std;
int main()
{
	float Q,I,t;
	cout<< "Enter charge in coulomb : ";
	cin>> Q;
		cout<< "Enter time in seconds : ";
	cin>> t;
	I=Q/t;
	cout <<"Current in amperes = "<< I;
	return 0;
}
