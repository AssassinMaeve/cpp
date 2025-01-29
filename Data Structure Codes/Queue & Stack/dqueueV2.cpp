#include <iostream>
using namespace std;

#define MAX 100 // Define the maximum size of the deque

int dq[MAX];
int front = -1, rear = -1; // Initialize front and rear to -1

void insertFront() {
    int val;

    if (front == 0 && rear == MAX - 1 || front == rear + 1) { // Check if deque is full
        cout << "Deque full" << endl;
    } else {
        cout << "Enter value to insert at front: ";
        cin >> val;

        if (front == -1) { // First insertion
            front = 0;
            rear = 0;
        } else if (front == 0) { // Wrap around
            front = MAX - 1;
        } else {
            front--;
        }
        dq[front] = val;
    }
}

void insertRear() {
    int val;

    if (front == 0 && rear == MAX - 1 || front == rear + 1) { // Check if deque is full
        cout << "Deque full" << endl;
    } else {
        cout << "Enter value to insert at rear: ";
        cin >> val;

        if (rear == -1) { // First insertion
            front = 0;
            rear = 0;
        } else if (rear == MAX - 1) { // Wrap around
            rear = 0;
        } else {
            rear++;
        }
        dq[rear] = val;
    }
}

void deleteFront() {
    if (front == -1) { // Check if deque is empty
        cout << "Deque is empty" << endl;
    } else {
        int val = dq[front];
        cout << "Deleted element from front is " << val << endl;

        if (front == rear) { // Only one element was present
            front = rear = -1; // Reset both pointers
        } else if (front == MAX - 1) { // Wrap around
            front = 0;
        } else {
            front++;
        }
    }
}

void deleteRear() {
    if (rear == -1) { // Check if deque is empty
        cout << "Deque is empty" << endl;
    } else {
        int val = dq[rear];
        cout << "Deleted element from rear is " << val << endl;

        if (front == rear) { // Only one element was present
            front = rear = -1; // Reset both pointers
        } else if (rear == 0) { // Wrap around
            rear = MAX - 1;
        } else {
            rear--;
        }
    }
}

void display() {
    if (front == -1) {
        cout << "Deque is empty" << endl;
    } else {
        cout << "Elements in Deque: ";
        
        int i = front;
        while (true) {
            cout << dq[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % MAX; // Move circularly
        }
        
        cout << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display Deque\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertFront();
                break;
            case 2:
                insertRear();
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
