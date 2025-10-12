#include <iostream>
using namespace std;
int main ()
{
	float milk_production, milk_per_carton, litres, cop_per_litre, cop_per_carton, total_cop, profit_per_carton, total_profit;
	int cartons;
	
	cout<<"Enter the total amount of milk in litres produced in the morning: ";
	cin>>milk_production;
	
	cartons = milk_production/3.78;
	
	cout<<"The number of cartons needed to hold the  milk are: "<<cartons<<endl;
	
	cop_per_litre = 0.38 * milk_production;
	cop_per_carton = cop_per_litre * 3.78;
	total_cop = cop_per_carton + cartons;
	
	cout<<"Total cost of production of milk is: "<<total_cop<<"$"<<endl;
	
	profit_per_carton = 0.27;
	
	total_profit = profit_per_carton * cartons;
	
	cout<<"The total profit of producing milk is: "<<total_profit<<"$"<<endl;
	
	return 0;
}
