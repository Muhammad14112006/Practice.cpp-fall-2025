#include <iostream>
using namespace std;
int main ()
{
    string fruit, day;
    float quantity, price;

    cout<<"Enter the quantity of the fruits: ";
    cin>>quantity;

    cout<<"Enter the day (weekday or weekend): ";
    cin>>day;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
       {cout<<"Enter the fruit Name: ";
        cin>>fruit;
       if (fruit == "Banana")
       {price = quantity * 2.5;}
       else if (fruit == "Apple")
       {price = quantity * 1.2;}
       else if (fruit == "Orange")
       {price = quantity * 0.85;}
       else if (fruit == "Grapefruit")
       {price = quantity * 1.45;}
       else if (fruit == "Kiwi")
       {price = quantity * 2.7;}
       else if (fruit == "Pinneapple")
       {price = quantity * 5.5;}
       else if (fruit == "Grapes")
       {price = quantity * 3.85;}
       else
       {cout<<"Invalid";}
       }
    else if (day == "Saturday" || day == "Sunday")
      {cout<<"Enter the fruit Name: ";
       cin>>fruit;
       if (fruit == "Banana")
       {price = quantity * 2.7;}
       else if (fruit == "Apple")
       {price = quantity * 1.25;}
       else if (fruit == "Orange")
       {price = quantity * 0.9;}
       else if (fruit == "Grapefruit")
       {price = quantity * 1.6;}
       else if (fruit == "Kiwi")
       {price = quantity * 3.0;}
       else if (fruit == "Pinneapple")
       {price = quantity * 5.6;}
       else if (fruit == "Grapes")
       {price = quantity * 4.2;}
       else
       {cout<<"Invalid";} }
    else 
    {cout<<"Invalid"<<endl;}

    cout<<"The Price is: "<<price;

    return 0;
}