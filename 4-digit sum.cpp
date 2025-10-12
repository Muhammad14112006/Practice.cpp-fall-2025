#include <iostream>
using namespace std;
int main ()
{
	int a, n1, n2, n3, n4, rem, sum;
	
	cout<<"Enter a 4-digit number: ";
	cin>>a;
	
	n1 = a/1000;
	rem = a%1000;
	n2 = rem/100;
	rem = rem%100;
	n3 = rem/10;
	n4 = rem%10;
	
	sum = n1 + n2 + n3 + n4;
	
	cout<<"Sum of the individual digits: "<<sum;
}
