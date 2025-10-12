#include <iostream>
using namespace std;
int main ()
{
    int stays;
    float price, discount, studio_price, apartment_price;
    string month;

    cout<<"Enter the name of the month: ";
    cin>>month;

    cout<<"Enter the number of stays: ";
    cin>>stays;

  if (month == "May" || month == "October")
  { 
     studio_price = 50.0 * stays;
     apartment_price = 65.0 * stays;
    
     if (stays > 7 && stays <= 14)
     {
      studio_price = studio_price - (0.05 * studio_price);
      apartment_price = apartment_price;
     }
     else if (stays > 14)
     {
      studio_price = studio_price - (0.3 * studio_price);
      apartment_price = apartment_price - (0.1 * apartment_price);
     }
  }
    
  if (month == "June" || month == "September")
  {  
    studio_price = 75.2 * stays;
    apartment_price = 68.7 * stays;

    if (stays > 14)
    {
      studio_price = studio_price - (0.2 * studio_price);
      apartment_price = apartment_price - (0.1 * apartment_price);
    }
  }
  if (month == "July" || month == "August")
  {
    studio_price = 76 * stays;
    apartment_price = 77 * stays;

    if (stays > 14)
    {
      studio_price = studio_price;
      apartment_price = apartment_price - (0.1 * apartment_price);
    }
  }

  cout<<"\nApartment: "<<apartment_price<<endl;
  cout<<"Studio: "<<studio_price;

  return 0;
}