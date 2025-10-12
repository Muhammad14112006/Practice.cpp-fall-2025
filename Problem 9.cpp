#include <iostream>
using namespace std;
int main ()
{
	float t1, t2, t3, t4, t5, average;
	
	cout<<"Enter 5 test scores: ";
	cin>>t1>>t2>>t3>>t4>>t5;
	
	average = (t1 + t2 + t3 + t4 + t5)/5;
	
	cout<<"The average score of the student is: "<<average;
	
	return 0;
}
