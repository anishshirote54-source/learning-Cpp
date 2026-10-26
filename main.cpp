#include <iostream>
using namespace std;

int main () {
    int a, b, operation;
     
    do {
    cout << " Select an operation: " << endl;
    cout << " 1. Addition" << endl;
    cout << " 2. Subtraction" << endl;
    cout << " 3. Multiplication" << endl;
    cout << " 4. Division" << endl;
    cout << " 5. Quit" << endl;
    
    cin >> operation;

    switch (operation) {
        case 1 : {
            cout << "Enter First number: ";
            cin >> a;
            cout << "Enter Second number: ";
            cin >> b;
            cout << " Addition of the entered numbers is - " << a + b << endl;
            break;
        }
        case 2 : {
            cout << "Enter First number: ";
            cin >> a;
            cout << "Enter Second number: ";
            cin >> b;
            cout << " Subtraction of the entered numbers is - " << a - b << endl;
            break;
        }
        case 3 : {
            cout << "Enter First number: ";
            cin >> a;
            cout << "Enter Second number: ";
            cin >> b;
            cout << " Multiplication of the entered numbers is - " << a * b << endl;
            break;
        }
        case 4 : {
            cout << "Enter First number: ";
            cin >> a;
            cout << "Enter Second number: ";
            cin >> b;
                if (b == 0) {
                    cout << " Division by zero doesnt exist." << endl;
                } else {
                    cout << " Division of the entered numbers is - " << a / b << endl;
                }
            break;
        }
        case 5 : {
            cout << " youve decide to quit the program. Thank you for using the calculator." << endl;
            break;
            
        }
        default : {
            cout << " The entered operation number dosent exist in the given list. Please select a valid operation number." << endl;
        }

    }
        } while (operation != 5);

    return 0;
}