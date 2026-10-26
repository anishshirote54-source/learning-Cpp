#include <iostream>
using namespace std;
//to check the word is palindrome or not
int main () {
    string str;
    cout << "Enter a word: ";
    cin >> str;
    int len = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }
    return 0;
}