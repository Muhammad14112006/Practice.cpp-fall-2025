#include <iostream>
using namespace std;
int main ()
{
	char op;
	int a,b, result;
	
	cout<<"Enter value of a: ";
	cin>>a;
	
	cout<<"Enter the operator: ";
	cin>>op;
	
	cout<<"Enter value of b: ";
	cin>>b;
	
	if (op == '+')
	{result = a + b;}
	else if (op == '-')
	{result = a - b;}
	else if (op == '*')
	{result = a * b;}
	else if (op == '/')
	{result = a / b;}
	
	cout<<"The Result = "<<result;
	
	return 0;
}
