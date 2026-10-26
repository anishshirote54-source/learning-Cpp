#include <iostream>
using namespace std;

int main () {
    int a, b, temp;

    cout << "Enter the first number: ";
    cin >> a;   

    cout << "Enter the second number: ";
    cin >> b;   

    while (b!= 0) {
        temp = b;
        b = a%b;
        a = temp;
    } 
    cout << "The GCD is: " << a << endl;
    return 0;
}