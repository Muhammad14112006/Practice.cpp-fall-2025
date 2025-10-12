#include <iostream>
using namespace std;
int main ()
{
	char ch;
	
	cout<<"Enter a single character: ";
	cin>>ch;
	
	if (ch >= '0' && ch <='9')
	{cout<<"The character is a number.";}
	else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{cout<<"The character is a vowel.";}
	else 
	{cout<<"The character is a consonant.";}
	
	return 0;
}
