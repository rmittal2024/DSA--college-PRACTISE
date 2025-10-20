#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* head = nullptr;

void insertEnd(int x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        n->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head) temp = temp->next;
    temp->next = n;
    n->next = head;
}

void displayCircular() {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);
    cout << head->val << endl;
}

int main() {
    int arr[] = {20,100,40,80,60};
    for(int x: arr) insertEnd(x);
    displayCircular();
}
