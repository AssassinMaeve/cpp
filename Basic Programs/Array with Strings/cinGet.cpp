#include<iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter a character: ";
    cin.get(ch);

    cout << "You entered: " << ch << endl;

    if(ch == ' '){
        cout << "It is a space character." << endl;
    } else if ( ch == '\n'){
        cout << "It is a newline character." << endl;
    } else {
        cout << "It is a normal character." << endl;
    }
}