#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int val;        // Stores data
    Node* next;    // Pointer to next node
};

// Stack class using linked list
class mystack {
    Node* head;       // Pointer to the top of the stack
    int stacksize;    // Number of elements in the stack

public:
    // Constructor to initialize stack
    mystack() {
        head = NULL;
        stacksize = 0;
    }

    // Push operation to insert a node at head
    void Push(int g) {
        Node* temp = new Node();  // Create a new node
        temp->val = g;            // Assign value to the node
        temp->next = head;        // Point new node's next to current head
        head = temp;              // Update head to new node

        cout << "Element " << g << " has been pushed to stack :)" << endl;
        stacksize++;
    }

    // Pop operation to delete the node from head
    void Pop() {
        if (head == NULL) {
            cout << "Stack is empty, cannot Pop :(" << endl;
            return;
        }

        Node* temp = head;          // Store current head
        head = temp->next;          // Move head to next node
        delete temp;                // Delete old head
        cout << "The element has been Popped :)" << endl;
        stacksize--;
    }

    // Display the top element in the stack
    void top() {
        if (head == NULL) {
            cout << "No top element is present. The Stack is Empty! :( " << endl;
        } else {
            cout << "The Element at top is: " << head->val << endl;
        }
    }

    // Check the size of the stack
    void size() {
        cout << "The size of the stack is: " << stacksize << endl;
    }

    // Check if the stack is empty
    void empty() {
        if (head == NULL) {
            cout << "The stack is empty! :( " << endl;
        } else {
            cout << "The stack is not empty! " << endl;
        }
    }

    // Display all elements in the stack
    void display() {
        if (head == NULL) {
            cout << "Stack is empty" << endl; // If stack is empty, display message
            return;
        }
        
        Node* temp = head;  // Start from the top of the stack
        cout << "Stack elements are: ";
        
        while (temp != NULL) {  // Traverse and print each element
            cout << temp->val << " ";  // Use 'val' instead of 'data'
            temp = temp->next;
        }
        
        cout << endl;
    }
};

int main() {
    mystack s;          // Create an instance of mystack

    int choice;  // Variable for user choice
    int value;   // Variable for value input

    cout << "<-------Stack Operation------->" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Display Top Element" << endl;
    cout << "4. Check Size" << endl;
    cout << "5. Check if Empty" << endl;
    cout << "6. Exit" << endl;
    cout << "7. Display All Elements" << endl;

    do {
        cout << "Enter your choice: ";  // Prompt user for choice
        cin >> choice;                  // Read choice into 'choice'

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;           // Read value for push operation
                s.Push(value);
                break;

            case 2:
                s.Pop();                // Call pop operation
                break;

            case 3:
                s.top();                // Display top element in the stack
                break;

            case 4:
                s.size();               // Print size of the stack
                break;

            case 5:
                s.empty();              // Check if empty
                break;

            case 6:
                cout << "Exiting....." << endl; // Exit message
                break;

            case 7:
                s.display();            // Display all elements in the stack
                break;

            default:
                cout << "Invalid Choice, please try again." << endl;  // Handle invalid input
                break;
        }
        
        cout << endl;  // Add a newline for better readability

    } while (choice != 6);  // Continue until user chooses to exit

    return 0;
}
