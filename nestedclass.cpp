#include <iostream>
using namespace std;
class A { // outer class 
    public :
    int a, b;
    class B { // inner class (cannot print the elements of outer class)
        public :
        int c, d;
        void display () {
            cout  << "c is " << c << "and d is " << d << endl;
        }
    };
};

int main () {
    return 0;
}