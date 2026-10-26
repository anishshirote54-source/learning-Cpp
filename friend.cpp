#include <iostream>
using namespace std;
class A  {
    private :
    int p;
    public :
    int a, b;
    friend class B;
};
class B : public A {
    private :
    int q;
    public :
    int c, d;
    void print (int x, int y, int z, int w, int s, int t) {
        a = x; b = y; c = z; d = w; s = p; t = q;
    }
};


int main () {
    
    return 0;
}