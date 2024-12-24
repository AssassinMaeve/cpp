#include <iostream>
using namespace std;

#define MAX_SIZE 100 // Define maximum size of the binary tree

class BinaryTree {
private:
    int data[MAX_SIZE]; // Array to store tree nodes
    int size;           // Current size of the tree

public:
    // Constructor to initialize the binary tree
    BinaryTree() {
        size = 0; // Start with an empty tree
    }

    // Function to insert a new element into the binary tree
    void insert(int value) {
        if (size < MAX_SIZE) {
            data[size] = value; // Insert value at the current size index
            size++;              // Increment the size
        } else {
            cout << "Binary tree is full!" << endl;
        }
    }

    // Function to print the binary tree in level order
    void printTree() {
        if (size == 0) {
            cout << "Binary Tree is empty!" << endl;
            return;
        }
        
        cout << "Binary Tree: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " "; // Print each element in the array
        }
        cout << endl;
    }
};

int main() {
    BinaryTree tree; // Create a BinaryTree object
    int value, numElements;

    cout << "Enter the number of elements to insert into the binary tree (max " << MAX_SIZE << "): ";
    cin >> numElements;

    if (numElements > MAX_SIZE) {
        cout << "Number of elements exceeds maximum size!" << endl;
        return 1; // Exit if too many elements are requested
    }

    for (int i = 0; i < numElements; i++) {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> value;
        tree.insert(value); // Insert user-provided value into the binary tree
    }

    // Print the binary tree
    tree.printTree();

    return 0;
}
