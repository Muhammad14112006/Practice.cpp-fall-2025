#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int num_of_volunteers, k, total_num_of_boxes_sold, num_of_boxes_sold, avg_num_of_boxes_sold;
    float profit, revenue;
    string name;

    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"Enter the number of volunteers: ";
    cin>>num_of_volunteers;

    total_num_of_boxes_sold = 0;
    k = 0;

    while(k < num_of_volunteers)
    {
        cout<<"Enter your name and number of boxes you sold: "<<endl;
        cin>>name>>num_of_boxes_sold;

        total_num_of_boxes_sold = total_num_of_boxes_sold + num_of_boxes_sold;

        k++;
    }

    cout<<"The total number of boxes sold = "<<total_num_of_boxes_sold<<endl;

    cout<<"Enter the profit per box: ";
    cin>>profit;

    revenue = total_num_of_boxes_sold * profit;

    cout<<"The revenue from the total boxes sold is: "<<revenue<<endl;

    avg_num_of_boxes_sold = total_num_of_boxes_sold / num_of_volunteers;

    if (k != 0)
    {
        cout<<"The average no. of boxes sold by each person is: "<<avg_num_of_boxes_sold<<endl;
    }
    else 
    {
        cout<<"No Volunteers."<<endl;
    }

    return 0;
}