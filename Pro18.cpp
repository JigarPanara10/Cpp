// Write C++ Program to Calculate the Power of a Number using function.//

#include <iostream>
using namespace std;

int main() 
{
    int Power;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> Power;

    cout << base << "^" << Power << " = ";

    while (Power != 0) {
        result *= base;
        --Power;
    }

    cout << result;
    
    return 0;
}