#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Logic function
Node* insertAtHead(Node* head, int value) {

    Node* temp = new Node();

    temp->data = value;
    temp->next = head;
    head = temp;

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

    // Insert 5 at head
    head = insertAtHead(head, 5);

    // Print list
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}