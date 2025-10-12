#include <iostream>
using namespace std;
int main ()
{
	float og_price, markup_percent,markup, ST_rate, selling_price, sales_tax, final_price;
	
	cout<<"Enter the original price: ";
	cin>>og_price;
	
	cout<<"Enter the markup percentage: ";
	cin>>markup_percent;
	
	cout<<"Enter the Sales tax rate: ";
	cin>>ST_rate;
	
	cout<<"\nThe original price is: "<<og_price<<endl;
	cout<<"The markup percentage is: "<<markup_percent<<"%"<<endl;
	
	markup = (markup_percent/100) * og_price;
	selling_price = markup + og_price;
	
	cout<<"The selling price is: "<<selling_price<<endl;
	cout<<"The sales tax rate is: "<<ST_rate<<"%"<<endl;
	
	sales_tax = (ST_rate/100) * selling_price;
	
	cout<<"The sales tax is: "<<sales_tax<<endl;
	
	final_price = sales_tax + selling_price;
	
	cout<<"The final price of the product is: "<<final_price<<endl;
	
	return 0;
}
