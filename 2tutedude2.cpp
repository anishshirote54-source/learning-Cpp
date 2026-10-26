#include <iostream>
using namespace std;

int main () {
int i, n, sum;

cout << "The perfect numbers between 1 to 500 are: ";
for (i=1; i<=500; i++) {
    sum = 0;
    for (n=1; n<i; n++) {
        if (i % n == 0) {
            sum += n;
        }
    }
    if (sum == i) {
        cout << i << " ";
    }
}

return 0;
}