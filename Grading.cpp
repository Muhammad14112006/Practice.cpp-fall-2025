#include <iostream>
#include <string>
using namespace std;
int main ()
{ 
int english, maths, chemistry, ssc, biology,obtained_marks, total_marks;
float percentage;
string student_name, grade;

cout<<"Enter English marks: ";
cin>>english;

cout<<"Enter Maths marks: ";
cin>>maths;

cout<<"Enter chemistry marks: ";
cin>>chemistry;

cout<<"Enter social science marks: ";
cin>>ssc;

cout<<"Enter Biology marks: ";
cin>>biology; 

cin.ignore();
cout<<"Enter student Name: ";
getline(cin,student_name);

cout<<"Enter total marks: ";
cin>>total_marks;

obtained_marks = english + maths + chemistry + ssc + biology;

percentage = (obtained_marks/ (float) total_marks) * 100.0;

cout<<"Name: "<<student_name<<endl;
cout<<"Total marks: "<<total_marks<<endl;
cout<<"Obtained Percentage: "<<percentage<<endl;

if (percentage >= 90 && percentage <= 100)
{cout<<"Grade : A+";}

else if (percentage >= 80 && percentage <90)
{cout<<"Grade : A";}

else if (percentage >= 70 && percentage < 80)
{cout<<"Grade : B+";}

else if (percentage >=60 && percentage < 70)
{cout<<"Grade : B";}

else if (percentage >= 50 && percentage < 60)
{cout<<"Grade : C+";}

else if (percentage >= 40 && percentage < 50)
{cout<<"Grade : C";}

else if (percentage < 40)
{cout<<"Grade : F";}

return 0;
}
