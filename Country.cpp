#include <iostream>
using namespace std;
int main ()
{ 
string country;

cout<<"Enter your country name: ";
cin>>country;

if (country != "Germany" && country != "Australia")
cout<<"You should come visit these sometimes !";

return 0;
}
