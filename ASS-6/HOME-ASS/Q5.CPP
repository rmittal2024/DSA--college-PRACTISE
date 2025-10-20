#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

bool isCircular(Node* head) {
    if(!head) return false;
    Node* temp = head->next;
    while(temp && temp != head) temp = temp->next;
    return temp == head;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = head;

    cout << (isCircular(head) ? "Yes" : "No") << endl;
}
