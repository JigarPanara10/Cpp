// Write C++ Program to Check Even or Odd Integers.//

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if(n%2==0)
        cout << n <<" The integer is even.";
    else
        cout << n <<" The integer is odd.";

  return 0;
}
