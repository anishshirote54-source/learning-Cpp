#include <iostream>
using namespace std;

class addition {
    public :

    int Add (int x, int y) {
        return x + y;
    }

    double Add (double x, double y) {
        return x + y;
    }

    int Add (int x, int y, int z) {
        return x + y + z;
    }
};

int main () {
    addition a;

    cout << a.Add (5, 5) << endl;
    cout << a.Add (4.25, 4.25) << endl;
    cout << a.Add (4, 4, 7) << endl;

    return 0;

}