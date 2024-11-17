#include<iostream>
using namespace std;

void moneyy(int *moneyptr){
    cout<< *moneyptr<<endl;
    *moneyptr=2*(*moneyptr);
    cout<< *moneyptr<<endl;

}



int main(){
    int money=10;
    moneyy(&money);
    cout<<money<<endl;
    return 0;
}