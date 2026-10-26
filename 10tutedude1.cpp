#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int studentClass, age;

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter student's class: ";
    cin >> studentClass;

    cout << "Enter student's age: ";
    cin >> age;

    ofstream file("student_info.txt");

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << name << ", " << studentClass << ", " << age;

    file.close();

    cout << "Student details saved successfully.";

    return 0;
}