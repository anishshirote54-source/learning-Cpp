#include <iostream>
using namespace std;

class Factorial {
    public :
    int fact (int n) {
        int c = 1;
        for (int i = 1; i <= n; i ++) {
        c *= i;
        }
        return c;
    }
};

int main () {
    int a, c;
    Factorial b;

    cout << "Enter the number of which you want the factorial" << endl;
    cin >> a;

    cout << "The factorial is " << b.fact(a) << endl;

    return 0;

}