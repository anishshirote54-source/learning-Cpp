#include <iostream>
using namespace std;

int main () {
    float a, b;

    cout << "Enter the numerator - " << endl;
    cin >> a;

    cout << "Enter the denominator - " << endl;
    cin >> b;
    
    try {
        if (b == 0) {
            throw 1;
        }
        cout << "The answer to the division is - " << a/b << endl;
    }

    catch (int e) {
        cout << "Trying to divide by 0. ERROR Code - " << e << endl;
    }  

    return 0;
}