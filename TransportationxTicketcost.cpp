#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float budget, people, transport_cost, budget_VIP,budget_normal, tickets_cost, vremaining, nremaining;
    char category;
    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Enter Budget: ";
    cin>>budget;

    cout<<"Enter category (v for VIP, and n for Normal): ";
    cin>>category;

    cout<<"No. of people within the group (1-200): ";
    cin>>people;

if (category == 'v')
 {
    if (people > 1 && people <= 200)
    {
        if (people >= 1 && people <= 4)
        {
            transport_cost = budget * 0.75;
            tickets_cost = 499.99 * people;
            budget_VIP = transport_cost + tickets_cost;

            if (budget_VIP <= budget)
            {
                vremaining = budget - budget_VIP;
                cout<<"Yes ! You have "<<vremaining<<" Rial left.";
            }
            else if (budget_VIP > budget)
            {
                vremaining = budget_VIP - budget;
                cout<<"Not enough money ! You need "<<vremaining<<" Rials more.";
            }
        }
        else if (people > 4 && people <= 9)
        {
            transport_cost = budget * 0.60;
            tickets_cost = 499.99 * people;
            budget_VIP = transport_cost + tickets_cost;

            if (budget_VIP <= budget)
            {
                vremaining = budget - budget_VIP;
                cout<<"Yes ! You have "<<vremaining<<" Rial left.";
            }
            else if (budget_VIP > budget)
            {
                vremaining = budget_VIP - budget;
                cout<<"Not enough money ! You need "<<vremaining<<" Rials more.";
            }
        }
        else if (people > 9 && people <= 24)
        {
            transport_cost = budget * 0.50;
            tickets_cost = 499.99 * people;
            budget_VIP = transport_cost + tickets_cost;

            if (budget_VIP <= budget)
            {
                vremaining = budget - budget_VIP;
                cout<<"Yes ! You have "<<vremaining<<" Rial left.";
            }
            else if (budget_VIP > budget)
            {
                vremaining = budget_VIP - budget;
                cout<<"Not enough money ! You need "<<vremaining<<" Rials more.";
            }
        }
        else if (people > 24 && people <= 49)
        {
             transport_cost = budget * 0.40;
            tickets_cost = 499.99 * people;
            budget_VIP = transport_cost + tickets_cost;

            if (budget_VIP <= budget)
            {
                vremaining = budget - budget_VIP;
                cout<<"Yes ! You have "<<vremaining<<" Rial left.";
            }
            else if (budget_VIP > budget)
            {
                vremaining = budget_VIP - budget;
                cout<<"Not enough money ! You need "<<vremaining<<" Rials more.";
            }
        }
        else if (people > 49 && people <= 200)
        {
            transport_cost = budget * 0.25;
            tickets_cost = 499.99 * people;
            budget_VIP = transport_cost + tickets_cost;

            if (budget_VIP <= budget)
            {
                vremaining = budget - budget_VIP;
                cout<<"Yes ! You have "<<vremaining<<" Rial left.";
            }
            else if (budget_VIP > budget)
            {
                vremaining = budget_VIP - budget;
                cout<<"Not enough money ! You need "<<vremaining<<" Rials more.";
            }
        }
    }

    else if (people > 200)
    {
        cout<<"Error. Its too much y'know.";
    }
 }
else if  (category == 'n')
{
    if (people > 1 && people <= 200)
    {
        if (people >= 1 && people <= 4)
        {
            transport_cost = budget * 0.75;
            tickets_cost = 249.99 * people;
            budget_normal = transport_cost + tickets_cost;

            if (budget_normal <= budget)
            {
                nremaining = budget - budget_normal;
                cout<<"Yes ! You have "<<nremaining<<" Rial left.";
            }
            else if (budget_normal > budget)
            {
                nremaining = budget_normal - budget;
                cout<<"Not enough money ! You need "<<nremaining<<" Rials more.";
            }
        }
        else if (people > 4 && people <= 9)
        {
            transport_cost = budget * 0.60;
            tickets_cost = 249.99 * people;
            budget_normal = transport_cost + tickets_cost;

            if (budget_normal <= budget)
            {
                nremaining = budget - budget_normal;
                cout<<"Yes ! You have "<<nremaining<<" Rial left.";
            }
            else if (budget_normal > budget)
            {
                nremaining = budget_normal - budget;
                cout<<"Not enough money ! You need "<<nremaining<<" Rials more.";
            }
        }
        else if (people > 9 && people <= 24)
        {
            transport_cost = budget * 0.50;
            tickets_cost = 249.99 * people;
            budget_normal = transport_cost + tickets_cost;

            if (budget_normal <= budget)
            {
                nremaining = budget - budget_normal;
                cout<<"Yes ! You have "<<nremaining<<" Rial left.";
            }
            else if (budget_normal > budget)
            {
                nremaining = budget_normal - budget;
                cout<<"Not enough money ! You need "<<nremaining<<" Rials more.";
            }
        }
        else if (people > 24 && people <= 49)
        {
            transport_cost = budget * 0.40;
            tickets_cost = 249.99 * people;
            budget_normal = transport_cost + tickets_cost;

            if (budget_normal <= budget)
            {
                nremaining = budget - budget_normal;
                cout<<"Yes ! You have "<<nremaining<<" Rial left.";
            }
            else if (budget_normal > budget)
            {
                nremaining = budget_normal - budget;
                cout<<"Not enough money ! You need "<<nremaining<<" Rials more.";
            }
        }
        else if (people > 49 && people <= 200)
        {
            transport_cost = budget * 0.25;
            tickets_cost = 249.99 * people;
            budget_normal = transport_cost + tickets_cost;

            if (budget_normal <= budget)
            {
                nremaining = budget - budget_normal;
                cout<<"Yes ! You have "<<nremaining<<" Rial left.";
            }
            else if (budget_normal > budget)
            {
                nremaining = budget_normal - budget;
                cout<<"Not enough money ! You need "<<nremaining<<" Rials more.";
            }
        }
    }

    else if (people > 200)
    {
        cout<<"Error. Its too much y'know.";
    }
}

return 0;
}
