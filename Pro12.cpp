// Write C++ Program To Print Multiplication Table of a Number.//

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}