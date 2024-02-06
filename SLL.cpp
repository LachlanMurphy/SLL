#include "SLL.hpp"

SLL::SLL() {
    head = nullptr;
}

SLL::~SLL() {
    node* temp = nullptr;
    node* crawler = head;
    while (crawler) {
        temp = crawler->next;
        delete crawler;
        crawler = temp;
    }
}

node* SLL::add(node* prev, node data) {
    node* toAdd = new node;
    toAdd->name = data.name;
    toAdd->next = nullptr;
    toAdd->key = data.key;

    if (!head) {
        head = toAdd;
        return toAdd;
    }

    node* crawler = head;
    while (crawler) {
        if (crawler->key == prev->key) {
            node* tmp = prev->next;
            prev->next = toAdd;
            toAdd->next = tmp;
            return toAdd;
        }

        crawler = crawler->next;
    }

    cout << "No prev found." << endl;
}

void SLL::remove(int key) {

    node* prev = nullptr;
    node* crawler = head;
    while (crawler) {
        if (crawler->key == key) {
            if (prev) {
                prev->next = crawler->next;
            } else {
                head = head->next;
            }

            delete crawler;
            return;
        }

        prev = crawler;
        crawler = crawler->next;
    }

    cout << "No node to remove." << endl;
}

node* SLL::search(int key) {

    node* crawler = head;
    while (crawler) {
        if (crawler->key == key) return crawler;
        crawler = crawler->next;
    }

    cout << "Key not found." << endl;
}

void SLL::printList() {
    cout << "head -> ";
    node* crawler = head;
    while (crawler) {
        cout << crawler->name << " -> ";
        crawler = crawler->next;
    }
    
    cout << "null" << endl;
}