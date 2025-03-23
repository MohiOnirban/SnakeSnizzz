#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning
void insert(Node*& head, int value) {
    Node* newNode = new Node(); // Allocate memory
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to display the linked list
void display(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    Node* head = nullptr; // Initialize an empty list

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    cout << "Linked List: ";
    display(head);

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
