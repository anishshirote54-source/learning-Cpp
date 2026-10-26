#include <iostream>
using namespace std;

class des {
public:
    int real;
    int imag;

    des(int a, int b) {
        real = a;
        imag = b;
    }

    ~des() {
        cout << "A destructor is called" << endl;
    }

    void print() {
        cout << "The real and imaginary part is - "
             << real << " + i" << imag << endl;
    }
};

int main() {
    des a(2, 3);
    a.print();

    return 0;
}