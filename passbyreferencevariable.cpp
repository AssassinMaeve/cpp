#include<iostream>
using namespace std;

void inmoney(int &money){
        money=2*money;
        cout<<"Function Money: "<<money<<endl;
}

int main(){
    int money=88;
    inmoney(money);
    cout<<"Main money: "<<money<<endl;
    return 0;
}