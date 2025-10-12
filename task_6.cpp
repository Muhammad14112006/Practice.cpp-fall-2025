#include <iostream>
using namespace std;
int main ()
{
	float MB, KB, Bytes, Bits;
	cout<<"Enter the data in MB : ";
	cin>>MB;
	
	KB = 1024*MB;
	Bytes = 1024*KB;
	Bits = 8*Bytes;
	 cout<< MB << " MB in bits = " <<Bits;
	 return 0;
	 
}
