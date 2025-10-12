#include <iostream>
using namespace std;
int main ()
{
	int n, w, h, walls;
	
	cout<<"Number of square meters you can paint: ";
	cin>>n;
	
	cout<<"Width of the single wall (in meters): ";
	cin>>w;
	
	cout<<"Height of the single wall (in meters): ";
	cin>>h;
	
	walls = n/(h*w);
	
	cout<<"Number of walls you can paint: "<<walls;
	
	return 0;
}
