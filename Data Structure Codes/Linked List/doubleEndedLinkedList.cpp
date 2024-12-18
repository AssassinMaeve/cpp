#include <iostream>
using namespace std;

// Node structure for the doubly linked list
struct Node {
    int data;       // Data part of the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    Node(int val) {
        data = val; // Initialize data
        next = nullptr; // Initialize next pointer
        prev = nullptr; // Initialize previous pointer
    }
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head; // Pointer to the head of the list
    Node* tail; // Pointer to the tail of the list

public:
    DoublyLinkedList() {
        head = nullptr; // Initialize head to nullptr
        tail = nullptr; // Initialize tail to nullptr
    }

    // Method to insert a node at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) { // If the list is empty
            head = newNode;
            tail = newNode; // Tail also points to the new node
        } else {
            newNode->next = head; // New node points to current head
            head->prev = newNode; // Current head's previous points to new node
            head = newNode; // Move head to point to new node
        }
    }

    // Method to insert a node at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (tail == nullptr) { // If the list is empty
            head = newNode;
            tail = newNode; // Head also points to the new node
        } else {
            tail->next = newNode; // Current tail's next points to new node
            newNode->prev = tail; // New node's previous points to current tail
            tail = newNode; // Move tail to point to new node
        }
    }

    // Method to delete a node from the beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        if (head == tail) { // Only one node in the list
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next; // Move head pointer to next node
            head->prev = nullptr; // Update previous pointer of new head
        }
        delete temp; // Free memory of deleted node
    }

    // Method to delete a node from the end
    void deleteFromEnd() {
        if (tail == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = tail;
        if (head == tail) { // Only one node in the list
            head = nullptr;
            tail = nullptr;
        } else {
            tail = tail->prev; // Move tail pointer to previous node
            tail->next = nullptr; // Update next pointer of new tail
        }
        delete temp; // Free memory of deleted node
    }

    // Method to delete a node at a specific position in the list
    void deleteAtPosition(int position) {
        if (head == nullptr || position < 0) { 
            cout << "Invalid position or list is empty!" << endl;
            return;
        }

        if (position == 0) { 
            deleteFromBeginning(); // Delete at head if position is 0
            return;
        }

        Node* current = head;
        for (int i = 0; i < position && current != nullptr; i++) { 
            current = current->next; 
        }

        if (current == nullptr) { 
            cout << "Position out of bounds!" << endl;
            return; 
        }

        if (current->prev != nullptr) { 
            current->prev->next = current->next; 
        }
        
        if (current->next != nullptr) { 
            current->next->prev = current->prev; 
        }

        if (current == tail) { 
            tail = current->prev; 
        }

        delete current; 
    }

    // Method to display the doubly linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        Node* current = head; // Start from head
        while (current != nullptr) { 
            cout << current->data << " ";
            current = current->next; 
        }
        
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    int choice, value, position;

    
        cout << "\nDoubly Linked List Menu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete from Beginning\n";
        cout << "4. Delete from End\n";
        cout << "5. Delete from Position\n";
        cout << "6. Display List\n";
        cout << "7. Exit\n";

    do {    
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                dll.insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                dll.insertAtEnd(value);
                break;

            case 3:
                dll.deleteFromBeginning();
                cout << "Deleted from beginning." << endl;
                break;

            case 4:
                dll.deleteFromEnd();
                cout << "Deleted from end." << endl;
                break;

            case 5:
                cout << "Enter position to delete: ";
                cin >> position;
                dll.deleteAtPosition(position);
                break;

            case 6:
                cout << "Doubly Linked List: ";
                dll.display();
                break;

            case 7:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
        
    } while (choice != 7);

    return 0;
}
