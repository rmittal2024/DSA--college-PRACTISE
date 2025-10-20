#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* prev;
    Node(int x) : val(x), next(nullptr), prev(nullptr) {}
};

int sizeDoubly(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) { count++; temp = temp->next; }
    return count;
}

int sizeCircular(Node* head) {
    if(!head) return 0;
    int count = 1;
    Node* temp = head->next;
    while(temp != head) { count++; temp = temp->next; }
    return count;
}

int main() {
    Node* d = new Node(10);
    d->next = new Node(20);
    d->next->prev = d;
    d->next->next = new Node(30);
    d->next->next->prev = d->next;

    cout << sizeDoubly(d) << endl;

    Node* c = new Node(5);
    c->next = new Node(15);
    c->next->next = c;
    c->next->next->prev = c->next;
    c->prev = c->next;

    cout << sizeCircular(c) << endl;
}
