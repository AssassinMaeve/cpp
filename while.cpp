#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0,n2;
    cout<<"Enter the value"<<endl;
    cin>>n;

    while(i<=n){
        cin>>n2;
       sum=sum+n2;
       i++;
    }
    cout<<"The sum is: "<< sum <<endl;

    return 0;
}