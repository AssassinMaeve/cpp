#include<iostream>
#include <string.h>
using namespace std;

int main(){
    // char creation & printing
    char str[] = "Hello";

    // assign a new value to the char array
    strcpy(str, "World");
    cout << str << endl;

    // finding the length of the string
    cout << strlen(str) << endl;
    cout << sizeof(str) << endl;
}