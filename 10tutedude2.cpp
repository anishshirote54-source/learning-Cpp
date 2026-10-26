#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;

    ifstream file("student_info.txt");

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    cout << "Content from 'student_info.txt':" << endl;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}