#include<iostream>
#include<stack>
#include<string>
using namespace std;

int prec(char op){
    if(op=='+' || op=='-'){
        return 1;
    }
    if(op=='*' || op=='/'){
        return 2;
    }
    if(op=='^'){
        return 3;
    }else{
        return-1;
    }
}

string infixtopostfix(string s){
    stack<char> st;
    string res;
    for(char ch : s){
        if(isalnum(ch)){
        res+=ch;
    }else{while(!st.empty()&& prec(st.top())>=prec(ch)){
        res+=st.top();
        st.pop();
        }
         st.push(ch);
    }
    }while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){

    string s;
    cout<<"Enter an infix "<<endl;
    cin>>s;

    cout << "Postfix expression: " << infixtopostfix(s) << endl;
    return 0;
}