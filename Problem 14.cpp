#include <iostream>
using namespace std;
int main ()
{
	float bytes_per_GB, actual_bytes_per_GB, shown_size, actual_size, total;
	
	cout<<"Enter the said size of hard drive: ";
	cin>>shown_size;
	
	bytes_per_GB = 1000000000;
	actual_bytes_per_GB = 1024 * 1024 * 1024;
	
	total = shown_size * bytes_per_GB;
	actual_size = total / actual_bytes_per_GB;
	
	cout<<"The actual size of hard drive is: "<<actual_size;
	
	return 0;
}
