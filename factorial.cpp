#include<iostream>
using namespace std;

void factorial(){
    int a;
    double fact=1;
    cout<<"Enter the factorial"<<endl;
    cin>>a;

    for(int i=1;i<=a;i++){
            fact=fact*i;
    }
    cout<<"The factorial is: "<< fact <<endl;
}

int main(){
    factorial();
    return 0;
}
