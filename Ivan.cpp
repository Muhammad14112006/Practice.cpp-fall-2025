#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int age, k, year, years_to_live, total_years, ecount, ocount;
    float inherited_money, total_spending, rem_money;

    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Enter the money he inherited: ";
    cin>>inherited_money;

    cout<<"Enter the year in the past until which he has to live: ";
    cin>>years_to_live;

    age = 18;
    total_spending = 0;
    for (year = 1800; year <= years_to_live; year++)
    {
        if (year % 2 == 0)
        {
            total_spending = total_spending + 12000;
        }
        else 
        {
            total_spending += 12000 + (50 * age);
        }
        age++;
    }

    if (total_spending <= inherited_money)
    {
        rem_money = inherited_money - total_spending;
        cout<<"Yes! He will have a carefree life and will have "<<rem_money<<" dollars left.";
    }
    else if (total_spending > inherited_money)
    {
        rem_money = total_spending - inherited_money;
        cout<<"He'll need "<<rem_money<<" dollars to survive.";
    }

    return 0;
}