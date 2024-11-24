#include<iostream>
using namespace std;

int dqueue[5], front = -1, rear = -1, n = 5;

void insertfront() {
    int in;
    if (front == 0 && rear == n - 1) {
        cout << "Queue is full" << endl;
        return;
    } else if (front == -1 && rear == -1) { // Queue is empty
        front = 0;
        rear = 0;
        cout << "Enter the element at the front: ";
        cin >> in;
        dqueue[front] = in;
    } else {
        if (front == 0) {
            cout << "Cannot insert at the front. No space available." << endl;
        } else {
            cout << "Enter the element at the front: ";
            cin >> in;
            front--; // Move front backward
            dqueue[front] = in;
        }
    }
}

void insertend() {
    int in;
    if (rear == n - 1) {
        cout << "Queue is full" << endl;
    } else if (front == -1 && rear == -1) { // Queue is empty
        front = 0;
        rear = 0;
        cout << "Enter the element at the end: ";
        cin >> in;
        dqueue[rear] = in;
    } else {
        cout << "Enter the element at the end: ";
        cin >> in;
        rear++; // Move rear forward
        dqueue[rear] = in;
    }
}

void deletefront() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
        return;
    } else if (front == rear) { // Only one element
        cout << "Deleted element from the front: " << dqueue[front] << endl;
        front = rear = -1; // Reset the queue
    } else {
        cout << "Deleted element from the front: " << dqueue[front] << endl;
        front++; // Move front forward
    }
}

void deleterear() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
        return;
    } else if (front == rear) { // Only one element
        cout << "Deleted element from the rear: " << dqueue[rear] << endl;
        front = rear = -1; // Reset the queue
    } else {
        cout << "Deleted element from the rear: " << dqueue[rear] << endl;
        rear--; // Move rear backward
    }
}

void display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
        return;
    } else {
        cout << "Elements in the queue are: ";
        for (int i = front; i <= rear; i++) {
            cout << dqueue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int ch;
    cout << "1. Insert at the front" << endl;
    cout << "2. Insert at the rear" << endl;
    cout << "3. Delete from the front" << endl;
    cout << "4. Delete from the rear" << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: insertfront(); break;
            case 2: insertend(); break;
            case 3: deletefront(); break;
            case 4: deleterear(); break;
            case 5: display(); break;
            case 6: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice" << endl; break;
        }
    } while (ch != 6);

    return 0;
}
