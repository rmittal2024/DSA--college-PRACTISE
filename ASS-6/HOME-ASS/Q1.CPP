#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* prev;
    Node(int x) : val(x), next(nullptr), prev(nullptr) {}
};

Node* head = nullptr;

void insertFirst(int x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        n->next = n->prev = n;
        return;
    }
    Node* tail = head->prev;
    n->next = head;
    n->prev = tail;
    tail->next = head->prev = n;
    head = n;
}

void insertLast(int x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        n->next = n->prev = n;
        return;
    }
    Node* tail = head->prev;
    tail->next = n;
    n->prev = tail;
    n->next = head;
    head->prev = n;
}

void insertAfter(int key, int x) {
    if (!head) return;
    Node* temp = head;
    do {
        if (temp->val == key) {
            Node* n = new Node(x);
            Node* nxt = temp->next;
            temp->next = n;
            n->prev = temp;
            n->next = nxt;
            nxt->prev = n;
            return;
        }
        temp = temp->next;
    } while (temp != head);
}

void deleteNode(int key) {
    if (!head) return;
    Node* temp = head;
    do {
        if (temp->val == key) {
            if (temp->next == temp) {
                head = nullptr;
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                if (temp == head) head = temp->next;
            }
            delete temp;
            return;
        }
        temp = temp->next;
    } while (temp != head);
}

bool searchNode(int key) {
    if (!head) return false;
    Node* temp = head;
    do {
        if (temp->val == key) return true;
        temp = temp->next;
    } while (temp != head);
    return false;
}

void displayList() {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);
    cout << head->val << endl;
}

int main() {
    int choice, val, key;
    do {
        cout << "1. Insert First\n2. Insert Last\n3. Insert After\n4. Delete\n5. Search\n6. Display\n0. Exit\n";
        cin >> choice;
        switch(choice) {
            case 1: cin >> val; insertFirst(val); break;
            case 2: cin >> val; insertLast(val); break;
            case 3: cin >> key >> val; insertAfter(key,val); break;
            case 4: cin >> key; deleteNode(key); break;
            case 5: cin >> key; cout << (searchNode(key) ? "Found\n" : "Not Found\n"); break;
            case 6: displayList(); break;
        }
    } while (choice != 0);
}
