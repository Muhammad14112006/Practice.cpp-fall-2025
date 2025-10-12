#include <iostream>
using namespace std;
int main()
{
	float size, cost, area, cpp, cpa;
	
	cout<<"Enter the size of fertilizer bag in pounds: ";
	cin>>size;
	
	cout<<"Enter the cost of the bag: ";
	cin>>cost;
	
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	
	cpp = cost/size;
	
	cout<<"Cost of fertilizer per pound: "<<cpp<<"$"<<endl;
	
	cpa = cost/area;
	
	cout<<"Cost of fertilizing per square foot: "<<cpa<<"$";
	
	return 0;
}
