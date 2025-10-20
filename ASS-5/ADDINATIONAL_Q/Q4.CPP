#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* rotateLeft(Node* head, int k) {
    if (!head) return head;
    Node* tail = head;
    int n = 1;
    while (tail->next) {
        tail = tail->next;
        n++;
    }
    k %= n;
    if (k == 0) return head;
    tail->next = head;
    for (int i = 0; i < k; i++) tail = tail->next;
    head = tail->next;
    tail->next = nullptr;
    return head;
}

int main() {
    Node* head = new Node(1);
    Node* cur = head;
    for (int i = 2; i <= 6; i++) {
        cur->next = new Node(i);
        cur = cur->next;
    }
    head = rotateLeft(head, 2);
    cur = head;
    while (cur) {
        cout << cur->val << " ";
        cur = cur->next;
    }
}
