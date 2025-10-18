#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float n, k, count1, count2, count3, count4, count5, num, p1, p2, p3, p4, p5;

    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Enter number of entries (between 1 to 1000): ";
    cin>>n;

    count1 = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    count5 = 0;
    k = 1;
    while (k <= n)
    {
        cout<<"Enter number: ";
        cin>>num;

        if (num >= 1 && num < 200)
        {
            count1++;
        }
        else if (num >= 200 && num <= 399)
        {
            count2++;
        }
        else if (num >= 400 && num <= 599)
        {
            count3++;
        }
        else if (num >= 600 && num <= 799)
        {
            count4++;
        }
        else if (num >= 800 && num <= 1000)
        {
            count5++;
        }
    k++;
    }
    
    p1 = (count1 / n) * 100;
    p2 = (count2 / n) * 100;
    p3 = (count3 / n) * 100;
    p4 = (count4 / n) * 100;
    p4 = (count5 / n) * 100;

    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
    cout<<p4<<endl;
    cout<<p5;
    
    return 0;
}