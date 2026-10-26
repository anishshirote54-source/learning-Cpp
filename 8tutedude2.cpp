#include <iostream>
using namespace std;
class shape{
    public :

    virtual double area () = 0;
};

class rectangle : public shape {
    public :
    double length;
    double width; 

    double area () override {
        return (length*width);
    }
};

class triangle : public shape {
    public :
    double height;
    double base;

    double area () override {
        return (height*base)/2;
    }

};


int main () {
    int x, y;
    int s, t;
   
    cout << "Enter the dimensions of the rectangle " << endl;
    cout << "Length - " << endl;
    cin >> x;
    cout << "Width - " << endl;
    cin >> y;

    cout << "Enter the dimensions of the triangle " << endl;
    cout << "Height - " << endl;
    cin >> s;
    cout << "Base - " << endl;
    cin >> t;

    rectangle a;
    a.length = x;
    a.width = y;

    triangle b;
    b.height = s;
    b.base = t;

    
    cout << "The area of rectangle is " << a.area() << endl;
    cout << "The area of the triangle is " << b.area () << endl;
    

}