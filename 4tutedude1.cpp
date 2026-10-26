#include <iostream>
using namespace std;

bool eligible (int n ){
    if (n >= 18 ) {
       return true;
    } else {
        return false;
        
    }
};

int main () {
    int n;
    cout << "Enter you age " << endl;
    cin >> n;

    if (eligible(n) == true) {
        cout << "can vote";
    }else {
        cout << "cant vote";
    }

    return 0;
}