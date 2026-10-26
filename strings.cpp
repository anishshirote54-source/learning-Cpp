#include <iostream>
#include <cstring>
using namespace std;

int main () {
    char name [6] = "ANISH";
    char user [6];
    cout <<"Enter your name" << endl;
    cin >> user; 
    
    if(strcmp (name, user) == 0) {
        cout <<"Welcome supreme leader" << endl;
    } else {
        cout <<"You are not our supreme leader" <<endl;
    }
    
    return 0;
}