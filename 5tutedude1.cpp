#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    char grade;

};

int main () {
    student S1 = {"john doe", 20, 'A' };
    student S2 = {"Jane Smith", 22, 'B' };

    cout << "Student 1 :" << endl;
    cout << "Name of the first student is - " << S1.name << endl;
    cout << "The age of the first student is - " << S1.age << endl;
    cout << "The grade achieved by the first student is - " << S1.grade << endl;

    cout << "Student 2 :" << endl;
    cout << "Name of the second student is - " << S2.name << endl;
    cout << "The age of the second student is - " << S2.age << endl;
    cout << "The grade achieved by the second student is - " << S2.grade << endl;

    return 0;
}