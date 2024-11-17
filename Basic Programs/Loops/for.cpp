// Read n numbers and find the sum of even numbers
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the Value"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        int n2;
        cin>>n2;
       if(n2%2==0){
        sum = sum + n2;
    
       }
       
    }
    cout<< "The sum of even numbers is: "<< sum <<endl;

    return 0;
}