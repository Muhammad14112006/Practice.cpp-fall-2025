#include <iostream>
using namespace std;
int main ()
{
	float n1, n2, n3, n4, n5;
	int sum;
	
	cout<<"Enter 5 decimal numbers: ";
	cin>>n1>>n2>>n3>>n4>>n5;
	
	sum = n1 + n2 + n3 + n4 + n5;
	
	cout<<"The sum of 5 decimal numbers in nearest integer is: "<<sum;
	
	return 0;
}
