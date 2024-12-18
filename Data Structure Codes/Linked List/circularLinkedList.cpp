#include <iostream>
using namespace std;

// Node structure for the circular linked list
struct Node {
    int data;       // Data part of the node
    Node* next;     // Pointer to the next node

    Node(int val) {
        data = val; // Initialize data
        next = nullptr; // Initialize next pointer
    }
};

// Circular linked list class
class CircularLinkedList {
private:
    Node* last; // Pointer to the last node

public:
    CircularLinkedList() {
        last = nullptr; // Initialize last to nullptr
    }

    // Method to insert a node at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (last == nullptr) { // If the list is empty
            last = newNode;
            last->next = last; // Point to itself
        } else {
            newNode->next = last->next; // New node points to first node
            last->next = newNode; // Last node points to new node
        }
    }

    // Method to insert a node at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (last == nullptr) { // If the list is empty
            last = newNode;
            last->next = last; // Point to itself
        } else {
            newNode->next = last->next; // New node points to first node
            last->next = newNode; // Last node points to new node
            last = newNode; // Update last to new node
        }
    }

    // Method to delete a node from the beginning
    void deleteFromBeginning() {
        if (last == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* firstNode = last->next;
        if (firstNode == last) { // Only one node in the list
            delete firstNode;
            last = nullptr;
        } else {
            last->next = firstNode->next; // Bypass the first node
            delete firstNode;
        }
    }

    // Method to delete a node from the end
    void deleteFromEnd() {
        if (last == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* current = last->next; // Start from first node
        if (current == last) { // Only one node in the list
            delete current;
            last = nullptr;
            return;
        }

        while (current->next != last) { // Traverse to find second-to-last node
            current = current->next;
        }

        delete last; // Delete the last node
        current->next = current; // Make it circular again by pointing to itself
        last = current; // Update last pointer
    }

    // Method to delete a node at a specific position in the list
    void deleteAtPosition(int position) {
        if (last == nullptr || position < 0) { 
            cout << "Invalid position or list is empty!" << endl;
            return;
        }

        if (position == 0) { 
            deleteFromBeginning(); // Delete at head if position is 0
            return;
        }

        Node* current = last->next; 
        for (int i = 0; i < position - 1 && current != nullptr; i++) { 
            current = current->next; 
        }

        if (current == nullptr || current->next == nullptr) { 
            cout << "Position out of bounds!" << endl;
            return; 
        }

        Node* toDelete = current->next; 
        current->next = current->next->next; 

        if (toDelete == last) { 
            last = current; 
        }

        delete toDelete; 
    }

    // Method to display the circular linked list
    void display() {
        if (last == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        Node* current = last->next; // Start from first node
        do {
            cout << current->data << " ";
            current = current->next; // Move to next node
        } while (current != last->next); // Stop when we reach back to first node
        
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    int choice, value, position;

    
        cout << "\nCircular Linked List Menu:\n";
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
                cll.insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                cll.insertAtEnd(value);
                break;

            case 3:
                cll.deleteFromBeginning();
                cout << "Deleted from beginning." << endl;
                break;

            case 4:
                cll.deleteFromEnd();
                cout << "Deleted from end." << endl;
                break;

            case 5:
                cout << "Enter position to delete: ";
                cin >> position;
                cll.deleteAtPosition(position);
                break;

            case 6:
                cout << "Circular Linked List: ";
                cll.display();
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
