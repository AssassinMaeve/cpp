#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9};

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;

    // print all number till 100

    int n= sizeof(arr)/sizeof(int);
    cout<< n << endl;

    for(int i=0;i<=(n-1);i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}