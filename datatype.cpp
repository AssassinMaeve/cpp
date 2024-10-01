#include<iostream>
#include<iomanip>
using namespace std;
    int main(){
        int n=123;
        float m=123123.12312312;
        bool j= true;
        double k=12.21312312312;
        char o='a';


        cout<<n<<endl;
        cout<< fixed << setprecision(8) <<m<<endl;
        cout<< fixed << setprecision(8) << k <<endl ;
        cout<<k<<endl;
        cout<<o<<endl;

        return 0;
    }