#include<iostream>
using namespace std;

void readLine(char *arr){
    int count = 0;

    for(int i = 0 ; i < 100; i++){
        cin.get(arr[i]);
        if(arr[i] == '\n'){
            arr[i] = '\0';
            break;
        }
        count ++;
    }
    cout << count << endl;
}

int main(){
    char arr[100];
    readLine(arr);
    return 0;
}