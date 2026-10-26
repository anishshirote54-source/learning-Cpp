#include <iostream>
using namespace std;
class ComplexNumbers {
    private :
    int real;
    int imag;
    
    public :
    ComplexNumbers (void) { 
    real = 0;
    imag = 0;
    }
    
    ComplexNumbers (int x, int y) {
        real = x;
        imag = y;
    }
    
    ComplexNumbers (const ComplexNumbers& z) {
        real = z.real;
        imag = z.imag;
    }
    
    void display (void);
    void SetValues (int, int);
    bool IsReal(void);
    ComplexNumbers operator + (const ComplexNumbers&);
    
};

int main () {
    ComplexNumbers a;
    ComplexNumbers b;
    ComplexNumbers *c;
    ComplexNumbers d;

    a.SetValues (2, 3);
    a.display ();
    cout << a.IsReal () << "(0 means not real, 1 means real)" << endl;
    
    b.SetValues (1, 0);
    b.display ();
    cout << b.IsReal () << "(0 means not real, 1 means real)" << endl;
    
    c = &b;
    c->display ();
    
    d = a + b;
    d.display ();
    
    return 0;
    
}

void ComplexNumbers :: display (void) {
    cout << real << "+ i" << imag << endl;
}
void ComplexNumbers :: SetValues (int x, int y) {
    real = x;
    imag = y;
}
bool ComplexNumbers :: IsReal (void) {
    if (imag == 0) {
        return true;
    } else {
        return false;
    }
}
ComplexNumbers ComplexNumbers :: operator +(const ComplexNumbers& z) {
    ComplexNumbers x;
    x.real = real + z.real;
    x.imag = imag + z.imag;
    return x;
}