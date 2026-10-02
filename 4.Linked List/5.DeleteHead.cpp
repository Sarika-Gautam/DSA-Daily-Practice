#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Logic function
Node* DeleteHead(Node* head) {

    head = head->next;

    return head;
}

// Main function
int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    head = DeleteHead(head);

    // Print list
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}