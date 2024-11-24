#include<iostream>
#include<string>
#include<stack>
using namespace std;

int pres(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
    if(c=='*' || c=='/'){
        return 2;
    }
    if(c=='^'){
        return 3;
    }
    return -1;
}

string infixtopostfix(string s){
    stack<char> st;
    string res;

    for(size_t i=0;i<=s.length();i++){
        char ch = s[i];
        if(isalnum(ch)){
            res+=ch;
        }else{
            while(!st.empty() && pres(st.top()) && pres(ch)){
                res+=st.top();
                st.pop();
            }
            st.push(ch);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
    }
    return res;
}

int main(){
    string ch;
    cout<<"Enter the infix value"<<endl;
    cin>>ch;

    cout<<"The expression: "<<infixtopostfix(ch)<<endl;
    return 0;
}