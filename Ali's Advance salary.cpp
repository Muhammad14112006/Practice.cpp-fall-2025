#include <iostream>
using namespace std;
int main ()
{
	float required_amount, monthly_advance, salary, price, Advance_salary, Months_rem, Total_req_months;
	
	salary = 10000;
	
	price = 50000;
	
	monthly_advance = 0.5 * salary;
	
	Advance_salary = monthly_advance * 6 + salary;
	
	required_amount = price - Advance_salary;
	
	
	
	if (Advance_salary >= price)
	{cout<<"He can buy the laptop";}
	else if (Advance_salary < price)
	cout<<"He can't buy the laptop"<<endl;
	
	Months_rem = required_amount / monthly_advance;
	

	
	cout<<"Months required = "<<Months_rem;
	
	return 0;
}
