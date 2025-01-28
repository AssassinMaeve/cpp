// Pointers in 2D arrays

#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << arr << endl;    // This will give the address of the first element of the 2D array
    cout << "Address of the 0,0 " << &arr[0][0] << endl;    // This will give the address of the first element of the 2D array
    cout << "Adress of the 0, 1 "<< &arr[0][1]  << endl;    // This will give the address of the second element of the 2D array

    cout << "Array + 1 :" << arr + 1 << endl;    // This will give the address of the next row
    cout << "Address of 1,0 " << &arr[1][0] << endl;    // This will give the address of the first element of the second row

    return 0; 
}