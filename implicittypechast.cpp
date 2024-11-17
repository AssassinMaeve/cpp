#include<iostream>
using namespace std;
int main(){
    cout<<(5/2)<<endl;
    // typecasting -> change of resulting datatype

    //implicit Typecasting
    // float +int
    cout<<(5/3.2)<<endl;
    cout<<(20.2/3)<<endl;

    //char+int
    char letter='A';

    //implicit Typecasting
    cout<<letter+1<<endl;


    letter=letter+1;
    cout<<letter<<endl;

    char ch = 68;
    cout<< ch<<  endl;

    // boolean + int= int
    cout<<true + 6<<endl;
    
    return 0;
}