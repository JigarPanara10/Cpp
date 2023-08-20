// Write C++ program to find factorial of the given number with the use of function //

#include <iostream>  
using namespace std;  
int main()  
{  
    int i,fact=1,n;    
    
    cout<<"Enter any Number: ";    
    
    cin>>n;    
    
    for(i=1;i<=n;i++)
    {    
      fact=fact*i;    
    }    
    
    cout<<"Factorial of " <<n<<" is: "<<fact<<endl;  
    
    return 0;  
}  