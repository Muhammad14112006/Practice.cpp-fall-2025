#include <iostream>
using namespace std;
int main ()
{
	int a, b, solution;
	
	cout<<"Enter the value of a ";
	cin>>a;
	
	cout<<"Enter the value of b ";
	cin>>b;
	
	solution = (a*a) + (b*b) - 2*(a*b);
	
	cout<<"The solution is "<<solution;
	
	return 0;
}
