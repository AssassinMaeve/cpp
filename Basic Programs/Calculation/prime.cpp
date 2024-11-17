#include<iostream>
using namespace std;

int main(){
    int n,i;
    int count=0;
    cout<<"Enter the Value"<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        }if(count==2){
            cout<<"The number is prime"<< n <<endl;
        }else{
            cout<<"The number is not prime "<< n <<endl;
        }

        return 0;
    }
