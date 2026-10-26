#include <iostream>
using namespace std;

class Base
{
public:
    int data1;
    int data2;

    Base(int a , int b) 
    {
        data1 = a;
        data2 = b;
    }
};

class Derived : public Base
{
public:
Derived (int a, int b) : Base (a, b) {

}
    void show()
    {
        cout << " data1 = " << data1 << " data2 = " << data2 ;
    }
};

int main() {
    Derived d(68, 69);
    d.show();
    return 0;
}