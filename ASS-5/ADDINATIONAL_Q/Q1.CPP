#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* getIntersection(Node* headA, Node* headB) {
    Node* a = headA;
    Node* b = headB;
    while (a != b) {
        a = a ? a->next : headB;
        b = b ? b->next : headA;
    }
    return a;
}

int main() {
    Node* c = new Node(8);
    c->next = new Node(5);
    Node* a = new Node(4);
    a->next = new Node(1);
    a->next->next = c;
    Node* b = new Node(5);
    b->next = new Node(6);
    b->next->next = new Node(1);
    b->next->next->next = c;

    Node* res = getIntersection(a, b);
    if (res) cout << "Intersection at " << res->val;
    else cout << "No Intersection";
}
