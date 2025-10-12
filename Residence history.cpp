#include <iostream>
using namespace std;
int main ()
{
	int age, times, average;
	
	cout<<"Enter the person's age: ";
	cin>>age;
	
	cout<<"Enter the number of times they've moved: ";
	cin>>times;
	
	average = age/times;
	
	cout<<"Average number of years lived in the same house: "<<average;
	
	return 0;
}
