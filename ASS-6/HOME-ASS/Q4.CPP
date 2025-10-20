#include <iostream>
using namespace std;

struct Node {
    char val;
    Node* next;
    Node* prev;
    Node(char x) : val(x), next(nullptr), prev(nullptr) {}
};

bool isPalindrome(Node* head) {
    if(!head) return true;
    Node* tail = head;
    while(tail->next) tail = tail->next;
    while(head != tail && head->prev != tail) {
        if(head->val != tail->val) return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* head = new Node('r');
    head->next = new Node('a');
    head->next->prev = head;
    head->next->next = new Node('r');
    head->next->next->prev = head->next;

    cout << (isPalindrome(head) ? "True" : "False") << endl;
}
