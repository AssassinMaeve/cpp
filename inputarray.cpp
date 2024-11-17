#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    // array capacity
    cout<< sizeof(arr)/sizeof(int)<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
        return 0;
}