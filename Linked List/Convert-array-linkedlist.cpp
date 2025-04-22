#include <iostream>
using namespace std;

// Define a node for the linked list
struct Node {
    int data;       // Data part
    Node* next;     // Pointer to the next node
};

// Function to create a linked list from an array
Node* arrayToLinkedList(int arr[], int n) {
    if (n == 0) return nullptr; // If the array is empty, return null

    Node* head = new Node{arr[0], nullptr}; // Create the head node
    Node* current= head; // Pointer to traverse and build the list

    for (int i = 1; i < n; ++i) {
        Node* newNode = new Node{arr[i], nullptr}; // Create a new node
        current->next = newNode; // Link the current node to the new node
        current = newNode; // Move to the new node
    }

    return head; // Return the head of the linked list
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

int main() {
    // Input array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node* head = arrayToLinkedList(arr, n);

    // Display the linked list
    cout << "Linked List: ";
    displayLinkedList(head);

    return 0;
}
