
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], sub[100];

    cout << "Enter main string: ";
    cin.getline(str, 200);

    cout << "Enter substring: ";
    cin.getline(sub, 100);

    char *p = str;
    bool found = false;

    cout << "Starting positions of substring '" << sub << "':" << endl;

    while (*p != '\0') {
        if (strncmp(p, sub, strlen(sub)) == 0) {
            cout << "Position " << (p - str) << endl;
            found = true;
        }
        p++;
    }

    if (!found) {
        cout << "Substring not found." << endl;
    }

    return 0;
}
