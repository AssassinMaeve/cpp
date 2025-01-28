#include<iostream>
using namespace std;

int main(){

    // One way to declare a char array
    char arr[] = {'a','b','c','\0'}; // char must be null terminated otherwise you will get garbage values
    cout << sizeof(arr) << endl;

    // Another way to declare a char array
    char arr2[] = "abc";
    cout << sizeof(arr2) << endl;

    // Another way to declare a char array
    char arr3[10] = "abc";
    cout << sizeof(arr3) << endl;

    cout << (void *)arr << endl; // This will show the address 
    cout << arr << endl;    
    cout << arr2 << endl;

}
