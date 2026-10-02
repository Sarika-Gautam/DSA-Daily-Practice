#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Logic function
Node* insertAtTail(Node* head, int value) {

    Node* temp = new Node();

    temp->data = value;
    temp->next = NULL;

    // If list is empty
    if(head == NULL) {
        return temp;
    }

    Node* current = head;

    // Go to last node
    while(current->next != NULL) {
        current = current->next;
    }

    // Connect last node to new node
    current->next = temp;

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

    head = insertAtTail(head, 40);

    // Print list
    Node* current = head;

    while(current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}