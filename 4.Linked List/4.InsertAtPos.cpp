#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};

Node * insertAtPosition(Node*head , int value ,int position){
    Node*temp = new Node ();
    temp->data = value;

    //Insert at head
    if (position == 1){
        temp -> next = head;
        return temp;
    }
    Node*curr = head;

    for(int i = 1; i < position - 1; i++) {
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;

    return head;
}
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

    head = insertAtPosition(head, 15, 2);

    Node* curr = head;

    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}