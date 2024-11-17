#include<iostream>
using namespace std;

void print(int *myarray, int n){
            for(int i=0;i<n;i++){
                cout<<myarray[i]<<endl;
            }

}

int main(){
    // taking the input
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
            //array size
        cout<<sizeof(arr)<<endl;
        print(arr,n);
        return 0;

}