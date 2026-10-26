#include <iostream>
using namespace std;

int main () {
    int a;
    
    cout << "Enter a number - "; 
    cin >> a;

    if (a % 2 == 0 && a != 0) {
        cout << " The entered number is an even number." << endl;
    } else if (a == 0) {
        cout << " The entered number is neither even nor odd." << endl;
    } else {
        cout << " The entered number is an odd number." << endl;
    }
    
    return 0; 

}