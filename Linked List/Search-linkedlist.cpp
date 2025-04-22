#include <iostream>
using namespace std;

// Definition of a Node
struct Node {
    int data;       // Data part
    Node* next;     // Pointer to the next node
};

// Function to search for an element in the linked list
bool searchLinkedList(Node* head, int key) {
    Node* temp = head; // Start from the head of the list
    while (temp != nullptr) {
        if (temp->data == key) {
            return true; // Element found
        }
        temp = temp->next; // Move to the next node
    }
    return false; // Element not found
}

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to add a node to the end of the linked list
Node* insertAtEnd(Node* head, int data) {
    if (head == nullptr) {
        return createNode(data); // Create the first node
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next; // Traverse to the end
    }
    temp->next = createNode(data); // Add new node at the end
    return head;
}

// Function to display the linked list
void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

// Main function
int main() {
    Node* head = nullptr; // Initialize an empty linked list

    // Adding elements to the linked list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    // Display the linked list
    cout << "Linked List: ";
    displayLinkedList(head);

    // Search for an element
    int key;
    cout << "Enter the value to search: ";
    cin >> key;

    // Call the search function
    if (searchLinkedList(head, key)) {
        cout << "Element " << key << " is found in the linked list." << endl;
    } else {
        cout << "Element " << key << " is not found in the linked list." << endl;
    }

    return 0;
}
