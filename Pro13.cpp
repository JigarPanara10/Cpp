// Write C++ Program to Calculate Sum of First n Natural Numbers using function. //

#include <iostream>
using namespace std;

int main() {
    int p, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> p;

    for (int i = 1; i <= p; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}