#include <iostream>
using namespace std;
int main ()
{
    float physics, urdu, maths, english, total_marks, obtained_marks, percentage;
    string grade;

    cout<<"Enter Maths score (out of 100): ";
    cin>>maths;

    cout<<"Enter Physics score (out of 100): ";
    cin>>physics;

    cout<<"Enter Urdu score (out of 100): ";
    cin>>urdu;

    cout<<"Enter English score (out of 100): ";
    cin>>english;

    obtained_marks = maths + physics + urdu + english;

    cout<<"\nObtained marks = "<<obtained_marks<<endl;

    total_marks = 400;

    percentage = (obtained_marks / total_marks) * 100;

    cout<<"Percentage = "<<percentage<<endl;

    if (percentage >= 90 && percentage <= 100)
    {
        cout<<"Grade : A+"<<endl;
    }

    else if (percentage >= 80 && percentage <90)
    {
        cout<<"Grade : A"<<endl;
    }

    else if (percentage >= 70 && percentage < 80)
    {
        cout<<"Grade : B+"<<endl;
    }

    else if (percentage >=60 && percentage < 70)
    {
        cout<<"Grade : B"<<endl;
    }

    else if (percentage >= 50 && percentage < 60)
    {
        cout<<"Grade : C+"<<endl;
    }

    else if (percentage >= 40 && percentage < 50)
    {
        cout<<"Grade : C"<<endl;
    }

    else if (percentage < 40)
    {
        cout<<"Grade : F"<<endl;
    }

    if (physics < 40 || maths < 40 || urdu < 40 || english < 40)
    cout<<"You have failed ! ";

    return 0;
}