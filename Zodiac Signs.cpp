#include <iostream>
using namespace std;
int main ()
{
    string sign, month;
    int date;

    cout<<"Enter your date of Birth, just date not month: ";
    cin>>date;

    cout<<"Enter your month of Birth: ";
    cin>>month;

    if (month == "March" && date >= 21 || month == "April" && date <= 19)
    {cout<<"Aries";}

    else if (month == "April" && date >= 20 || month == "May" && date <= 20)
    {cout<<"Taurus";}

    else if (month == "May" && date >= 21 || month == "June" && date <= 20)
    {cout<<"Gemini";}

    else if (month == "June" && date >= 21 || month == "July" && date <= 22)
    {cout<<"Cancer";}

    else if (month == "July" && date >= 23 || month == "August" && date <=22)
    {cout<<"Leo";}

    else if (month == "August" && date >= 23 || month == "September" && date <=22)
    {cout<<"Virgo";}

    else if (month == "September" && date >= 23 || month == "October" && date <= 22)
    {cout<<"Libra";}

    else if (month == "October" && date >=23 || month == "November" && date <= 21)
    {cout<<"Scorpio";}

    else if (month == "November" && date >= 22 || month == "December" && date <= 21)
    {cout<<"Sagittarius";}

    else if (month == "December" && date >= 22 || month == "January" && date <= 19)
    {cout<<"Capricorn";}

    else if (month == "January" && date >= 20 || month == "February" && date <=18)
    {cout<<"Aquarius";}

    else if (month == "February" && date >= 19 || month == "March" && date <=20)
    {cout<<"Pisces";}

    return 0;
}