#include <iostream>
using namespace std;
int main ()
{
	float milk_production, cop_per_litre, profit_per_carton, total_cop, net_profit;
	int cartons;
	
	cout<<"Enter the cost of producing 1 litre of milk: ";
	cin>>cop_per_litre;
	
	cout<<"Enter the total amount of milk in litres produced in the morning: ";
	cin>>milk_production;
	
	cout<<"Enter the profit per carton: ";
	cin>>profit_per_carton;
	
	cartons = milk_production/3.78;
	
	cout<<"The number of cartons needed to hold the  milk are: "<<cartons<<endl;
	
	total_cop = cop_per_litre * milk_production;
	
	cout<<"The total cost of production of milk is: "<<total_cop<<endl;
	
	net_profit = profit_per_carton * cartons;
	
	cout<<"The total profit of producing milk is: "<<net_profit<<endl;
	
	return 0;
}
