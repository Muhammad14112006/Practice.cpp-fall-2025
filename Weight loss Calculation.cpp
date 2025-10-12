#include <iostream>
using namespace std;
int main ()
{
	string name;
	float weight, target;
	
	cout<<"Enter the name of the person: ";
	cin>>name;
	
	cout<<"Enter the target weight loss in KGs: ";
	cin>>weight;
	
	target = weight*15;
	
	cout<<name<<"will need "<<target<<" days to lose "<<weight<<" KG of weight by following the doctor's suggestions";
	
	return 0;
}
