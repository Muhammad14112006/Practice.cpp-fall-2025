#include <iostream>
using namespace std;
int main ()
{
    float age, toys, money,gift, x, countt, toyp, toy_money, cash, total_money, rem_money, countm;
    int k;

    cout<<"Enter the age of Lilly: ";
    cin>>age;

    cout<<"Enter the washing machine price: ";
    cin>>x;

    cout<<"Enter the price of each unit toy: ";
    cin>>toyp;
    
    countm = 0;
    countt = 0;
    money = 0;
    gift = 0;

    for (k = 1; k <= age; k++)
    {
        if (k % 2 == 0)
        {
            gift = gift + 10;
            money = (money + gift) - 1;
            countm++;
        }
        else 
        {
            countt++;
        }
    }

toy_money = countt * toyp;
cash = money;

total_money = toy_money + cash;

if (total_money >= x)
{
    rem_money = total_money - x;
    cout<<"Yes !\n"<<rem_money;
}
else if (total_money < x)
{
    rem_money = x - total_money;
    cout<<"No !\n"<<rem_money;
}

return 0;
}