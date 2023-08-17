// Write C++ program to find compound interest //

#include <bits/stdc++.h>
using namespace std;

int main()
{
	double principal,rate,time;

    cout<<"Enter the Principal amount::";
    cin>>principal;

    cout<<"Enter the Rate of interest::";
    cin>>rate;

    cout<<"Enter the Time period in years::";
    cin>>time;

	double A = principal * (pow((1 + rate / 100), time));
	double CI = A- principal;

	cout << "Compound interest is " << CI;

	return 0;
}
