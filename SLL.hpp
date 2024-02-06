#ifndef _SLL
#define _SLL

#include <string>
#include <iostream>
using namespace std;


struct node {
    int key;

    string name;
    // any data
    node* next;
};

class SLL {
public: // methods
    SLL();
    ~SLL();

    node* search(int key);

    node* add(node* prev, node data);

    void remove(int key);

    void printList();


public: // members
    node* head;

};


#endif // _SLL