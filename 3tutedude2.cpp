#include <iostream>
using namespace std;    

int main () {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    char target;
    cout << "Enter the character to search for: "
    cin >> target;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == target) {
            cout << "The target character is found in the string." << endl;
            cout << "Found at index: " << i << endl;
            return 0;
        }
    }
    cout << "The target character is not found in the string." << endl;
    return 0;
}