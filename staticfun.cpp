#include <iostream>
using namespace std;

class rectangle {
    private :
    int length, breadth, area;

    public :
    static int count;
    rectangle () {
        length = 0; breadth = 0; area = 0;
        count++;
    }
    static int howmuchmemory () {
        return (count*12 + 4); // 4 is for the static variable count which is not part of the object
    }
    void putVal (int l, int b) {
        length = l; breadth = b;
        area = l*b;
    }
    void display (void) { 
        cout << howmuchmemory () << endl;
    }
};
int rectangle :: count = 0;


int main () {
    rectangle a, b, c;
    cout << rectangle :: count << endl;
    a.howmuchmemory ();
    a.display ();
    return 0;
} 