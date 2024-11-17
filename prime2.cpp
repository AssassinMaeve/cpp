#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the Value"<<endl;
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
        cout<<"Not a Prime Number"<<endl;
        break;
        }
    }

    if(i==n){
        cout<<"Is a Prime Number"<<endl;
    }else{
        cout<<"Not a Prime Number"<<endl;
    }
    return 0;
}