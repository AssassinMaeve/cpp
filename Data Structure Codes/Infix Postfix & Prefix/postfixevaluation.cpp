#include<iostream>
#include<stack>
#include<Math.h>
using namespace std;

int postfixevaluation(string s){
        stack<int> st;

        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){     //if value is between 0-9
            st.push(s[i]-'0');              // coverting string to int
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            
            case '-':
                st.push(op1-op2);
                break;
            
            case '*':
                st.push(op1*op2);
                break;

            case '/':
                st.push(op1/op2);
                break;

            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
}
        return st.top();
}

int main(){
    cout<<postfixevaluation("46+2/5*7+")<<endl;
    return 0;
}