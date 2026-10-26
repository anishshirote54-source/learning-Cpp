
#include <iostream>
using namespace std;

class reverse {
public:
    void ReverseNumber (int n) {
        int rev = 0;

        while (n>0) {
            int digit = n%10;
            rev = rev*10 + digit;
            n = n/10;
        }
        cout << "The reverse is : " << rev << endl;   
    }
};

int main() {
    reverse r;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    r.ReverseNumber(n);

    return 0;
}
