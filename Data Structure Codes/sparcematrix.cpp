#include <iostream>
using namespace std;

struct element {
    int row;
    int col;
    int value;
};

class spasematrix {
private:
    element elements[10]; // Fixed array to store sparse matrix elements
    int count;            // Number of non-zero elements

public:
    spasematrix() : count(0) {} // Constructor initializes count to 0

    void insert(int row, int col, int value) {
        if (value != 0 && count < 10) {
            elements[count++] = {row, col, value}; // Add non-zero element
        } else if (value == 0) {
            cout << "Zero values are not stored in a sparse matrix!" << endl;
        } else {
            cout << "Matrix is full, cannot add more elements!" << endl;
        }
    }

    void display() {
        if (count == 0) {
            cout << "Sparse matrix is empty!" << endl;
        } else {
            cout << "Sparse Matrix Elements:\n";
            for (int i = 0; i < count; i++) {
                cout << " Row " << elements[i].row
                     << " Col " << elements[i].col
                     << " Value " << elements[i].value << endl;
            }
        }
    }
};

int main() {
    spasematrix s;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert Element\n";
        cout << "2. Display Sparse Matrix\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int row, col, value;
                cout << "Enter row, column, and value (row col value): ";
                cin >> row >> col >> value;
                s.insert(row, col, value);
                break;
            }
            case 2:
                s.display();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
