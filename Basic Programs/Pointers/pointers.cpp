#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << arr << endl;    // This give the address of the array

    int *ptr = arr;         // This will point to the first element of the array
    cout << ptr << endl;    // This will give the address of the first element of the array
    cout << *ptr  << endl;  // This will give the value at the address stored in the pointer


    // Pointer arithmetic
    int *ptr1 = arr + 1;    // This will point to the next element of the array
    int *ptr2 = arr + 7;    // This will point to the 7th element of the array

    cout << ptr2 - ptr1 << endl;    // This will give the difference between the two pointers
    

    // Pointer to an array
    int (*ptr3) [10];
    ptr3 = &arr;
    cout << ptr3 << endl;


    //Dereferencing a pointer to an array
    cout << (*ptr3)[0] << endl;
    cout << (*ptr3) << endl;
    

    return 0;
}