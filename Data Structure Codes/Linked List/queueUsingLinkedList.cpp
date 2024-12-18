#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Queue class using linked list
class Queue {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue

public:
    // Constructor to initialize an empty queue
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Function to add an element to the queue
    void push(int x) {
        Node* temp = new Node(x);
        if (rear == NULL) { // If the queue is empty
            front = temp;
            rear = temp;
        } else {
            rear->next = temp; // Link the new node at the end of the queue
            rear = temp;       // Update the rear pointer
        }
    }

    // Function to remove an element from the queue
    void pop() {
        if (front == NULL) { // Check for underflow
            cout << "Queue Underflow" << endl;
            return;
        } else {
            Node* todelete = front; // Node to be deleted
            front = front->next;     // Move front pointer to the next node
            cout << "The element deleted is: " << todelete->data << endl; // Print deleted element
            delete todelete;         // Free memory
            if (front == NULL) {     // If the queue is now empty, update rear as well
                rear = NULL;
            }
        }
    }

    // Function to display all elements in the queue
    void display() {
        if (front == NULL) { // Check if the queue is empty
            cout << "Queue Empty" << endl;
            return;
        } else {
            Node* current = front; // Start from the front of the queue
            cout << "Queue elements: ";
            while (current != NULL) { // Traverse through the queue
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }

    // Function to check if the queue is empty
    void empty() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "The Queue is not Empty" << endl;
        }
    }
};

// Main function to interact with the Queue class
int main() {
    Queue q;  // Create a Queue object
    int choice, value;

    
        cout << "\nQueue Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Check if Empty\n";
        cout << "5. Exit\n";

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                q.push(value);
                break;

            case 2:
                q.pop();
                break;

            case 3:
                q.display();
                break;

            case 4:
                q.empty();
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
