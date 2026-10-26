
#include <iostream>
#include <list>
using namespace std;

void addElement(list<int>& l, int value) {
    l.push_back(value);
}

void displayList(const list<int>& l) {
    cout << "Elements in the linked list:" << endl;

    for (int value : l) {
        cout << value << endl;
    }
}

int main() {
    list<int> l;

    addElement(l, 10);
    addElement(l, 20);
    addElement(l, 30);
    addElement(l, 40);
    addElement(l, 50);

    displayList(l);

    return 0;
}
