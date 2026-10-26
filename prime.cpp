#inclde <iostream>
using namespace std;

int main () {
    int a;

    cin >> a;
    for (int i = 2; i<a; i++) {
        if (a%i==0) {
            cout << "Not Prime" << endl;
            return 0;
        }else {
            cout << "Prime" << endl;
            return 0;
        }
    }
}