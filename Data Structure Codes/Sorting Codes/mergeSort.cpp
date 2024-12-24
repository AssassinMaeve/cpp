#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Create temporary arrays
    int a[n1];
    int b[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i]; // Corrected indexing
    }

    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i]; // Corrected indexing
    }

    int i = 0, j = 0, k = l;

    // Merge the temporary arrays back into arr[l..r]
    while (i < n1 && j < n2) { // Corrected condition
        if (a[i] <= b[j]) { // Use <= to maintain stability
            arr[k] = a[i];
            i++;
        } else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of a[] if any
    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of b[] if any
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2; // To avoid overflow
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {24, 54, 95, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1); // Corrected the right index

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
