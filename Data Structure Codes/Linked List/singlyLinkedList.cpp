#include <iostream>
using namespace std;

class node { // Node class definition
public:
    int data;
    node* next; // Pointer to the next node

    node(int val) {
        data = val; // Store value in data
        next = NULL; // Initialize next pointer to NULL
    }
};

// Function to insert a node at the head of the list
void insertathead(node*& head, int val) {
    node* n = new node(val);
    n->next = head; // Point new node to the current head
    head = n; // Move head to point to the new node
}

// Function to insert a node at the tail of the list
void insertattail(node*& head, int val) {
    node* n = new node(val); // Create a new node

    if (head == NULL) { // If the list is empty
        head = n; // Set head to the new node
        return;
    }

    node* temp = head; // Pointer to traverse the list
    while (temp->next != NULL) { // Traverse until the last node
        temp = temp->next;
    }
    temp->next = n; // Link the new node at the end of the list
}

// Function to display elements of the list
void display(node* head) {
    node* temp = head; // Start from head
    while (temp != NULL) { // Traverse until NULL
        cout << temp->data << " "; // Print data
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete a node at the head of the list
void deleteathead(node*& head) {
    if (head == NULL) return; // If list is empty, do nothing

    node* todelete = head; // Store current head for deletion
    head = head->next; // Move head pointer to next node

    delete todelete; // Free memory of deleted node
}

// Function to delete a node at the tail of the list
void deleteAtTail(node*& head) {
    if (head == NULL) return; // If list is empty, do nothing

    if (head->next == NULL) { // If there's only one element in the list
        deleteathead(head); // Delete it using deleteathead function
        return;
    }

    node* temp = head;
    
    while (temp->next->next != NULL) { 
        temp = temp->next; 
    }
    
    delete temp->next; // Delete last node
    temp->next = NULL; // Set second last's next pointer to NULL
}

// Function to delete a node at a specific position in the list
void deleteAtPosition(node*& head, int position) {
    if (head == NULL || position < 0) return; // If list is empty or invalid position

    if (position == 0) { 
        deleteathead(head); // Delete at head if position is 0
        return;
    }

    node* temp = head;
    
    for (int i = 0; i < position - 1 && temp != NULL; i++) { 
        temp = temp->next; 
    }

    if (temp == NULL || temp->next == NULL) return; // If position is out of bounds

    node* todelete = temp->next; 
    temp->next = temp->next->next; // Bypass the node to be deleted

    delete todelete; // Free memory of deleted node
}

int main() {
    node* head = NULL;
    int ch, val, pos;

    cout << "1. Insert from tail " << endl;
    cout << "2. Insert element At head " << endl;
    cout << "3. Display " << endl;
    cout << "4. Delete at head " << endl;
    cout << "5. Delete at tail " << endl;
    cout << "6. Delete at position" << endl;
    cout << "7. Exit " << endl;

    do {
        cout << "Enter your choice" << endl;
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter the elements in the tail: " << endl;
                cin >> val;
                insertattail(head, val);
                break;

            case 2:
                cout << "Enter the element at the head: " << endl;
                cin >> val;
                insertathead(head, val);
                break;

            case 3:
                cout << "The elements are: " << endl;
                display(head);
                break;

            case 4:
                cout << "The element is deleted at the head." << endl;
                deleteathead(head);
                break;

            case 5:
                cout << "Deleting element at tail." << endl;
                deleteAtTail(head);
                break;

            case 6:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteAtPosition(head, pos);
                break;

            case 7:
                cout << "Exiting...." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
        }
        
        cout<<endl;

    } while (ch != 7);

    
return 0;
}