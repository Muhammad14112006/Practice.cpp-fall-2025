#include <iostream>
using namespace std;
int main ()
{
    char service_code, time;
    int minutes_used;
    float rate;

    cout<<"Enter which type of customer you are (Residential or premium) select (r/p): ";
    cin>>service_code;

    cout<<"(Press 'D' for day time or press 'N' for night time) call: ";
    cin>>time;

    cout<<"Enter the number of minutes  you used the service: ";
    cin>>minutes_used;

    if (service_code == 'r' || service_code == 'R')
     {if (minutes_used <= 50)
      rate = 10;
     else if (minutes_used >50)
      rate = 10 + (minutes_used - 50) *0.2;}
    
    else if (service_code == 'p' || service_code == 'P')
    { if (time == 'D')
     if (minutes_used <= 75)
      rate = 25;
     else if (minutes_used >75)
      rate = 25 + (minutes_used - 75) * 0.1;
    if (time == 'N')
       if (minutes_used <= 100)
         rate = 25;
      else if (minutes_used > 100)
         rate = 25 + (minutes_used - 100) * 0.05;}
    
    cout<<"The charges are: "<<rate;

    return 0;
    }