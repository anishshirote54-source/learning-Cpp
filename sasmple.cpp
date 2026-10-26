#include <iostream>
using namespace std;

int main () {
    int a, b;
    int c = 1;

    cin >> a >> b;
   
    for (int i = 0; i < b; i++) {
        c *= a;
    }

    cout << c;

    return 0;
}

