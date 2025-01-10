#include<iostream>
#define MAX 5
using namespace std;

int stk[MAX],top=-1;

void push(){
    int val;
    if(top>=MAX-1){
        cout<<"stack overflow"<<endl;
    }else{
        cout<<"Insert value"<<endl;
        cin>>val;
        stk[++top]=val;
    }
}

void pop(){
    if(top<0){
        cout<<"Underflow"<<endl;
    }else{
        cout<<"Popped out"<<stk[top]<<endl;
        top--;
    }
}

void display(){
    if(top<0){
        cout<<"Empty"<<endl;
        return;
    }else{
        cout<<"Display: "<<endl;
        for(int i=0;i<=top;i++){
            cout<<stk[i]<<" ";
        }
    }
}

int main(){
    int ch;

    cout<<"1. Insert"<<endl;
    cout<<"2. pop"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. exit"<<endl;

    do{
        cout<<"Enter the choise"<<endl;
        cin>>ch;

        switch(ch){
            case 1:push();
            break;

            case 2:pop();
            break;

            case 3:display();
            break;

            case 4:cout<<"Exit"<<endl;
            break;

            default:cout<<"Invalid choice"<<endl;
        }
    }while(ch!=4);
}
