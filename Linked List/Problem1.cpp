#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;          // Data stored in the node
    Node* next;        // Pointer to the next node
};

int main() {
    // Creating nodes
    Node* head = new Node{10, nullptr};  // First node with data 10
    Node* second = new Node{20, nullptr};  // Second node with data 20

    // Linking nodes
    head->next = second;  // The first node points to the second node

    // Printing the next pointer of head (points to second)
    cout << head->next << endl;  // This prints the address of the second node

    // If you want to print the data in the next node
    cout << head->next->data << endl;  // This prints 20
}
