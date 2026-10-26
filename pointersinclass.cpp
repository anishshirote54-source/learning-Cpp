#include <iostream>
using namespace std;
class Base {
    public :
    int a, b;
    Base () {
        a = 0; b = 0;
    }
    virtual void output (void) {
        cout << "Base class output function" << endl;
    }
};
class Derived : public Base {
    public :
    int c, d;
    Derived () {
        c = 0; d = 0;
    }
    void output (void) {
        cout << "Derived class funtion" << endl;
    }
    void print (void) {
    cout << "a is " << a << "and b is " << b  << "c is " << c << "and d is " << d << endl;
}
};  


int main () {
   Base b;
   b.output(); 
          

 return 0;
}
