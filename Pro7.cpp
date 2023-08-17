// . Write C++ program to find simple interest.//

#include<iostream>

using namespace std;
int main()
{
   float pri,rad,time,SI;
   
   cout<<"Enter Principle Amount: ";
   cin>>pri;
   
   cout<<"Enter Rate of Interest: ";
   cin>>rad;
   
   cout<<"Enter Time Period: ";
   cin>>time;
   
   SI = (pri*rad*time)/100;
   
   cout<<"\nSimple Interest Amount: "<<SI;
   cout<<endl;
   return 0;
}