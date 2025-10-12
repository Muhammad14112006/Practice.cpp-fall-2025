#include <iostream>
using namespace std;
int main ()
{
	string name;
	int wins, loses, draws, points;
	
	cout<<"Enter the name of the cricket team : ";
	cin>>name;
	
	cout<<"Enter the numbers of wins : ";
	cin>>wins;
	
	cout<<"Enter the number of loses : ";
	cin>>loses;
	
	cout<<"Enter the number of draws : ";
	cin>>draws;
	
	points = 3*wins + 1*draws + 0*loses;
	
	cout<<name<<" has obtained "<<points<<" points in the Asia Cup tournament.";
	
	return 0;
}
