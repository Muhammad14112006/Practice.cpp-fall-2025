#include <iostream> 
using namespace std;
int main()
{
  string name;
  float interm,matricm,ecatm;
  float interp,matricp,ecatp;
  float aggregate ;
  
  cout<<"Enter the student's name: ";
  cin>>name;

   cout<<"Enter matriculation marks (out of 1100) : ";
   cin>>matricm;
   
   cout<<"Enter intermediate marks (out of 550) : ";
   cin>>interm;
   
   cout<<"Enter ECAT marks (out of 400) : ";
   cin>>ecatm;
   
   matricp = (matricm/1100.0)*100;
   interp = (interm/550.0)*100;
   ecatp = (ecatm/400.0)*100;
   
   aggregate = matricp*0.1 + interp*0.4 + ecatp*0.5;
   
   cout<<"Aggregate score for "<<name<<"in UET is: "<<aggregate;
	
	return 0;
	
}
