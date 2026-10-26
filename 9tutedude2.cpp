
#include <iostream>
using namespace std;

int main() {
    int a;
    char b;

    try {
        cout << "Enter an integer: ";
        if (!(cin >> a)) {
            throw 1;
        }
        cout << "Valid integer entered" << endl;
    }
    catch (int e) {
        cout << "Invalid integer input" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    try {
        cout << "Enter a character: ";
        if (!(cin >> b) || (cin.peek() != '\n' && cin.peek() != ' ' && cin.peek() != '\t')) {
            throw 'X';
        }
        cout << "Valid character entered" << endl;
    }
    catch (char e) {
        cout << "Invalid character input" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    return 0;
}
