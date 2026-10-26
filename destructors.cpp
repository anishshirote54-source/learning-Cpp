#include <iostream>
using namespace std;

class A {
    public :
    int a;
    A () {
        cout << "constructor is called" << endl;
    }
    ~A () {
        cout << "destructor is called" << endl;
    }
};

int main () {
     A a;

     return 0;
}