#include<iostream>
using namespace std;

void reverse(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[n-1 - i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Correct input here 
    }

    reverse(arr, n);  // Call reverse without cout

    return 0;
}
