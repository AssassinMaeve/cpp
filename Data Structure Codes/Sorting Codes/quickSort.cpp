#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choosing the last element as pivot
    int i = low - 1;        // Index of the smaller element

    // Traverse through all elements except the pivot
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;        // Increment index of smaller element
            swap(arr[i], arr[j]);  // Swap the elements
        }
    }
    swap(arr[i + 1], arr[high]);  // Place pivot in its correct position
    return i + 1;  // Return the index of the pivot
}

// QuickSort function (recursive)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pi - 1);  // Sort the left part
        quickSort(arr, pi + 1, high); // Sort the right part
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    quickSort(arr, 0, n - 1);  // Call quickSort on the entire array

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print the sorted array
    }
    cout << endl;

    return 0;
}