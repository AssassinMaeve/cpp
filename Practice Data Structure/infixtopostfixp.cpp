#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char op){
    if(op=='*' || op=='/'){
        return 2;
    }
    if(op=='+' || op=='-'){
        return 1;
    }
    if(op=='^'){
        return 3;
    }else{
        return -1;
    }
}

string infixtopostfixp(string s){
    stack<char> st;
    string res;
    for(char ch: s){
        if(isalnum(ch)){
            res+=ch;
        }else{
        while(!st.empty()&&prec(st.top())>=prec(ch)){
            res+=st.top();
            st.pop();
            
        }
        st.push(ch);
    }
}
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }   
    return res;
}



int main(){
    string ch;

    cout<<"Enter an infix "<<endl;
    cin>>ch;

    cout<<"The postfix expression is "<<infixtopostfixp(ch)<<endl;
    return 0;
}