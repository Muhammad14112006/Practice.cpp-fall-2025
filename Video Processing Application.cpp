#include <iostream>
using namespace std;
int main ()
{
	int minutes, fps, frames;
	
	cout<<"Number of minutes: ";
	cin>>minutes;
	
	cout<<"Frames per minute: ";
	cin>>fps;
	
	frames = (fps*60)*minutes;
	
	cout<<"Total number of frames: "<<frames;
	
	return 0;
}
