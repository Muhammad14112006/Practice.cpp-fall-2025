#include <iostream>
using namespace std;
int main ()
{
	string n1, n2, n3;
	int age1, age2,age3;
	
cout << "Enter 1st brother's name: ";
    getline(cin, n1);

    cout << "Enter 2nd brother's name: ";
    getline(cin, n2);

    cout << "Enter 3rd brother's name: ";
    getline(cin, n3);
    
    cout<<"Enter the 3 brother's ages: ";
    cin >> age1 >> age2 >> age3;
    
    if (age1 < age2 && age1 < age3)
    {cout<<"The youngest brother is: "<<n1;}
    else if (age2 < age1 && age2 < age3)
    {cout<<"The youngest brother is: "<<n2;}
	else if (age3 < age1 && age3 < age2)
	{cout<<"The youngest brother is: "<<n3;}
	
	return 0;
	 } 
