#include <iostream>
using namespace std;
int main ()
{
	float pay_per_hour, weekly_hours, income, taxes, net_income, clothes_spending, supplies_spending, rem_money, bonds_spending, parents_spending;
	
	cout<<"Enter the income per hour: ";
	cin>>pay_per_hour;
	
	cout<<"No. of hours per week: ";
	cin>>weekly_hours;
	
	income = pay_per_hour * weekly_hours;
	
	cout<<"\nMy income before taxes is: "<<income<<"$"<<endl;
	
	taxes = 0.14 * income;
	
	net_income = income - taxes;
	
	cout<<"My income after tax deductions: "<<net_income<<"$"<<endl;
	
	clothes_spending = 0.1 * net_income;
	
	cout<<"The total money spent on clothes is: "<<clothes_spending<<"$"<<endl;
	
	supplies_spending = 0.01 * net_income;
	
	cout<<"The total money spent on school supplies is: "<<supplies_spending<<"$"<<endl;
	
	rem_money = net_income - (clothes_spending + supplies_spending);
	
	bonds_spending = 0.25 * rem_money;
	
	cout<<"The total money spent on buying bonds is: "<<bonds_spending<<"$"<<endl;
	
	parents_spending = bonds_spending * 0.5;
	
	cout<<"The money my parents spent to buy additional saving bonds for me is: "<<parents_spending<<"$"<<endl;
	
	return 0;
}
