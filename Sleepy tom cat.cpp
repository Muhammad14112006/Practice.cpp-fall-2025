#include <iostream>
using namespace std;
int main ()
{
	int holidays, working_days, play_time, mdifference, ldifference, mhours, lhours, mmin, lmin;
	
	cout<<"Enter the number of holidays per annum: ";
	cin>>holidays;
	
	working_days = 365 - holidays;
	
	play_time = (63 * working_days) + (127 * holidays);
	
	if (play_time > 30000 )
	{cout<<"Tom will run away"<<endl;
	mdifference = play_time - 30000;
	mhours = mdifference/60;
	mmin = mdifference%60;
	cout<<mhours<<"hours and "<<mmin<<" minutes for play.";}
	
	else if (play_time <= 30000)
	{cout<<"Tom sleeps well"<<endl;
	ldifference = 30000 - play_time;
	lhours = ldifference/60;
	lmin = ldifference%60;
	cout<<lhours<<"hours and "<<lmin<<" minutes less for play.";} 
	
	return 0;
}
