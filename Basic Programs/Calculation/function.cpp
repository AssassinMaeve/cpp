#include<iostream>
using namespace std;

void name(string name, int age, int dob=2){                         // dob is a default parameter if u don't mention dob it will give value 2
    cout<< name << " " << age << " " << dob << " " <<endl;          // this is a parameterised funtion
}

int cal(int a, int b){           // returns a value
    return a+b;
}

int main(){
    name("Maeve",23);
    name("Bina",22);
    name("Evelyn",25);

    int a=5;
    int b=80;

    int result= cal(a,b); 
    cout<< result << endl;

    return 0;
}