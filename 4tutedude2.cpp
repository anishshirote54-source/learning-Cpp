#include <iostream>
using namespace std;

int add (int a, int b) {
    return a + b;
};

int subtract (int a, int b) {
    return a - b;
};

int multiply (int a, int b) {
    return a * b;
};

float divide (float a, float b) {
    return a/b;
};

int power (int a, int b) {
    int c = 1;
    for (int i = 0; i < b; i++) {
        c *= a;
    }
    return c;
};


int main () {
    int a, b;
    char x;

    cout << "Enter two number on which you want to perform the operations " << endl;
    cin >> a >> b;
    
    cout << "Enter which operation you want to perform" << endl;
    cout << "+ for additon" << endl;
    cout << "- for subtraction" << endl;
    cout << "* for multiplication" << endl;
    cout << "/ for division" << endl;
    cout << "^ for power where (a^b)" << endl;
    cin >> x;

    switch (x) {
        case '+' :
        cout << "Addition of the numbers is" <<  add(a, b);
        break;

        case '-' :
        cout << "Subtraction of the numbers is " << subtract (a, b);
        break;

        case '*' :
        cout << "Multiplication of the numbers is " << multiply (a, b);
        break;

        case '/' : 
        if (b != 0) {
        cout << "Division of the numbers is " <<  divide (a , b);
        }else {
            cout << "division by 0 is not allowed";
        }
        break;

        case '^' : 
        cout << "Answer to a^b is " << power (a, b);
        break;

        default :
        cout << "wrong number entered";
        break;
    }

    return 0;
}