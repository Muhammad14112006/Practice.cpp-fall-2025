#include <iostream>
using namespace std;
int main ()
{
	string temperature, humidity, activity;
	
	cout<<"Enter the temperature: ";
	cin>>temperature;
	
	cout<<"Enter the level of humidity: ";
	cin>>humidity;
	
	if (temperature == "warm" && humidity == "dry")
	{cout<<"Play Tennis"; }
	
	else if (temperature == "warm" && humidity == "humid")
	{cout<<"swim";}
	
	else if (temperature == "cold" && humidity == "dry")
	{cout<<"Play basketball";}
	
	else if (temperature == "cold" && humidity == "humid")
	{cout<<"Watch TV";}
	
	return 0; 
}
