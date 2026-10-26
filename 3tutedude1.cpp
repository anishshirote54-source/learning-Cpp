#include <iostream>
using namespace std;

class node {
    public : 
    int val;
    node* next;

    node (int v) {
        val = v;
        next = NULL;
    }
};

class list {
    private :
    node* head;
    node* tail;

    list () {
        head = tail = NULL;
    }

    void push_front (int val) {
        node* newNode = new node (val); //dynamic 
        if (head == NULL) {
            head = tail = newNode;
            return;
        }else {
            newNode->next = head;
            head = newNode;
        }
    }
}
int main () {
    
}