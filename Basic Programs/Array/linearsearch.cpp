#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int linearsearch(int *arr,int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    // Taking Input n
    int n;
    cin>>n;

    // Create array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //prints the array
    print(arr,n);

    // input for the value u wanna search
    int key;
    cin>>key;

    int res= linearsearch(arr,n,key);

    cout<<res;
    return 0;



}