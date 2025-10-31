#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int num, i;
    bool isprime;

    isprime = true;

    cout<<"Enter a positive number: ";
    cin>>num;

    if (num < 2)
    {
        isprime = false;
    }
    else if (num == 2)
    {
        isprime = true;
    }
    else if (num % 2 == 0)
    {
        isprime = false;
    }
    else
    {
        for (i = 3; i <= sqrt(num); i += 2)
        {
            if (num % i == 0)
            {
                isprime = false;

                break;
            }
        }

        return 0;
    }
      if (isprime)
      cout<<num<<" is a prime number.";

      else 
      cout<<num<<" isn't prime.";

      return 0;
}