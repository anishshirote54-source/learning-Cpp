#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int* b = &a;

    cout << "the value of a is " << a << endl;
    cout << "the address of a is " << &a << endl;
}