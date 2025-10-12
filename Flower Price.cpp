#include <iostream>
using namespace std;
int main ()
{
	float red_roses, white_roses, tulips, pr, pw, pt, total_price, discount, original_price, tp_amount;
	
	cout<<"Enter the number of Red Roses bought: ";
	cin>>red_roses;
	
	cout<<"Enter the number of White Roses bought: ";
	cin>>white_roses;
	
	cout<<"Enter the number of Tulips bought: ";
	cin>>tulips;
	
	pr = red_roses * 2.0;
	pw = white_roses * 5.1;
	pt = tulips * 2.5;
	
	total_price = pr + pw + pt;
	
	discount = total_price * 0.2;
	
	original_price = total_price;
	tp_amount = total_price - discount;
	
	if (total_price > 200)
	{cout<<"Original Price: "<<original_price<<"$"<<endl;
	cout<<"Price after Discount: "<<tp_amount<<"$"<<endl;}
	else
	{cout<<"Total Price: "<<total_price<<"$";}
	
	return 0;
}
