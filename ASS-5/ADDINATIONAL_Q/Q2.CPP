#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* reverseK(Node* head, int k) {
    Node* curr = head;
    int count = 0;
    while (curr && count < k) {
        curr = curr->next;
        count++;
    }
    if (count < k) return head;
    Node* prev = nullptr;
    curr = head;
    for (int i = 0; i < k; i++) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = reverseK(curr, k);
    return prev;
}

int main() {
    Node* head = new Node(1);
    Node* cur = head;
    for (int i = 2; i <= 9; i++) {
        cur->next = new Node(i);
        cur = cur->next;
    }
    head = reverseK(head, 3);
    cur = head;
    while (cur) {
        cout << cur->val;
        if (cur->next) cout << "->";
        cur = cur->next;
    }
}
