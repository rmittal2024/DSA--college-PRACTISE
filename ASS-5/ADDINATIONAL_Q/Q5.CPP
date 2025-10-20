#include <iostream>
using namespace std;

struct Node {
    int coeff, power;
    Node* next;
    Node(int c, int p) : coeff(c), power(p), next(nullptr) {}
};

Node* addPoly(Node* p1, Node* p2) {
    Node* head = new Node(0,0);
    Node* tail = head;
    while (p1 && p2) {
        if (p1->power == p2->power) {
            tail->next = new Node(p1->coeff + p2->coeff, p1->power);
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->power > p2->power) {
            tail->next = new Node(p1->coeff, p1->power);
            p1 = p1->next;
        } else {
            tail->next = new Node(p2->coeff, p2->power);
            p2 = p2->next;
        }
        tail = tail->next;
    }
    tail->next = p1 ? p1 : p2;
    return head->next;
}

int main() {
    Node* p1 = new Node(5,2);
    p1->next = new Node(4,1);
    p1->next->next = new Node(2,0);

    Node* p2 = new Node(5,1);
    p2->next = new Node(5,0);

    Node* res = addPoly(p1, p2);
    while (res) {
        cout << "[" << res->coeff << "," << res->power << "]";
        if (res->next) cout << "->";
        res = res->next;
    }
}
