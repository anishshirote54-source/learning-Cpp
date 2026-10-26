#include <iostream>
using namespace std;

int main () {
    string str;
    int count = 0;
    cout << "Enter a string: ";
    cin >> str; 

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cout << "The string contains a vowel at index " << i << "" << endl;
            count++;
        }
    }
    cout << "The total number of vowels in the string are: " << count << endl;
    cout << "the total number of consonants in the string are " <<str.length() - count << endl;
    return 0;
}