#include <iostream>
using namespace std;

class op {
    public : 
        int value;

        op operator+(op obj) {
        op temp;
        temp.value = value + obj.value;
        return temp;
    }

};

int main () {
    op x, y, z;

    x.value = 10;
    y.value = 20;

    z = x + y;
    cout << z.value ;

    return 0;

}