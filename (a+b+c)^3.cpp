#include <iostream>
using namespace std;
int main ()
{
	int a, b, c, solution;
	
	cout<<"Enter the value of a ";
	cin>>a;
	
	cout<<"Enter the value of b ";
	cin>>b;
	
	cout <<"Enter the value of c";
	cin>>c;
	
	solution = (a*a*a) + (b*b*b) + (c*c*c) + 2*(a*b) + 2*(b*c) + 2*(c*a);
	
	cout<<"The solution is "<<solution;
	
	return 0;
	
}
