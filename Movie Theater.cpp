#include <iostream>
using namespace std;
int main ()
{
	string name;
	float ATP, CTP, NAT, NCT, percentage, TAG, donation, Ramount;
	
	cout<<"Enter the movie name: ";
	cin>>name;
	
	cout<<"Enter the adult ticket price: ";
	cin>>ATP;
	
	cout<<"Enter the child ticket price: ";
	cin>>CTP;
	
	cout<<"Enter the number of adult tickets sold: ";
	cin>>NAT;
	
	cout<<"Enter the number of child tickets sold: ";
	cin>>NCT;
	
	cout<<"Enter the percentage of the amount to be donated at the charity: ";
	cin>>percentage;
	
	cout<<"Movie: "<<name<<endl;
	
	TAG = (ATP*NAT) + (CTP*NCT);
	
	cout<<"Total amount generated from ticket sales: "<<TAG<<"$"<<endl;
	
	donation = (percentage/100)*TAG;
	
	cout<<"Donation to charity (10%): "<<donation<<"$"<<endl;
	
	Ramount = TAG - donation;
	
	cout<<"Remaining amount after donation: "<<Ramount<<"$";
	
	return 0;
}
