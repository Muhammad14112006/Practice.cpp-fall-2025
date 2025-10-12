#include <iostream>
using namespace std;
int main ()
{
	float quarters, dimes, nickels, pennies, q_value, d_value, n_value;
	
	cout<<"Enter the no. of quarters: ";
	cin>>quarters;
	
	cout<<"Enter the no. of dimes: ";
	cin>>dimes;
	
	cout<<"Enter the no. of nickels: ";
	cin>>nickels;
	
	q_value = quarters * 0.25;
	d_value = dimes * 0.1;
	n_value = nickels * 0.05;
	
	pennies = q_value + d_value + n_value;
	
	cout<<"The total value in pennies is: "<<pennies;
	
	return 0;
}
