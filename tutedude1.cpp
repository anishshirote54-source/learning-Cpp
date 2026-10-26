#include <iostream>
using namespace std;

int main () {
    int a, b, op;
    
    do {  
    cout << "Enter the first number" << endl;
    cin >> a;
    
    cout << "Enter the second number" << endl;
    cin >> b;
    
    cout << "Enter the operation you want to perform" << endl;
    cout << "0 for addition" << endl;
    cout << "1 for subtraction" << endl;
    cout << "2 for multiplication" << endl;
    cout << "3 for division" << endl;
    cout << "4 to quit" << endl;
    cin >> op;
    
    
    switch (op) {
        case 4 :
        cout << "Thank you for using the calculator" << endl;
        break;
        
        case 0 :
        cout << "the additon of two numbers is " << a + b << endl;
        break;
        
        case 1 :
        cout <<"the subtraction of two numbers is " << a - b << endl;
        break;
        
        case 2 :
        cout << "multiplication of the two numbers is " << a*b << endl;
        break;
        
        case 3 :
        if (b == 0) {
            cout << "division by zero is not possible" << endl;
        } else {
            cout << "the quotient of the two numbers is " << a/b << endl;
        }
        break;
        
        default :
        cout << "invalid operation" << endl;
        break;
    }
} while (op != 4);
 return 0;
 
}
    