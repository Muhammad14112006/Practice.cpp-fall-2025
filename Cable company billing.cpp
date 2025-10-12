#include <iostream>
using namespace std;
int main ()
{
	int account_number, premium_channels_number, basic_connections, connections;
	char account_type ;
	float bill, rpremium_channel_fee, bpremium_channel_fee, bbasic_service_fee;
	const float rbill_processing_fee = 4.5;
	const float rbasic_service_fee = 20.5;
	const float bbill_processing_fee = 15.0;
	
	cout<<"Enter customer's account number: ";
	cin>>account_number;
	
	cout<<"Enter customer code: ";
	cin>>account_type;
	
	if (account_type == 'r' || account_type == 'r')
	{cout<<"Enter the number of premium channels: ";
	cin>>premium_channels_number;
	
	bill = rbill_processing_fee + rbasic_service_fee + (premium_channels_number * 7.5);}
	
	else if (account_type == 'b' || account_type == 'B')
	{cout<<"Enter the number of connections: ";
	cin>>connections;
	
	cout<<"Enter the number of premium channels: ";
	cin>>premium_channels_number;
	
	if  (connections > 10)
	bbasic_service_fee = 75 + (connections - 10)*5;
	
	else if ( connections <= 10)
	bbasic_service_fee = 75;
	
	bpremium_channel_fee = premium_channels_number * 50;
	
	bill = bbill_processing_fee + bbasic_service_fee + bpremium_channel_fee;}
	
	cout<<"Bill: "<<bill;
	
	return 0;
	}
