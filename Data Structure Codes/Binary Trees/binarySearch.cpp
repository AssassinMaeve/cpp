#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (x == array[mid]) return mid; // Element found
        if (x > array[mid]) low = mid + 1; // Search right half
        else high = mid - 1; // Search left half
    }
    return -1; // Element not found
}

int main() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 4;
    int result = binarySearch(array, x, 0, n - 1);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
