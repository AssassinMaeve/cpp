#include<iostream>
#define MAX 5
using namespace std;

int stack[MAX],top=-1;

void push(){
    int val;
    if(top==MAX-1){
        cout<<"The stack is full"<<endl;
    }else{
            cout<<"Enter the elements to be pushed: " <<endl;
            cin>>val;
            top++;
            stack[top]=val;
        }
    }

void pop(){
    if(top<0){
        cout<<"The stack is empty: "<<endl;
    }else{
        cout<<"The element popped is: "<<stack[top]<<endl;
        top--;
    }
}

void display(){
    if(top<0){
        cout<<"The stack is empty"<<endl;
    }else{
        cout<<"The elements are: "<<endl;
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<endl;
        }
    }
}

int main(){
    int ch;

    cout<<"1. push"<<endl;
    cout<<"2. pop"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. exit"<<endl;

    do{
        cout<<"Select ur options"<<endl;
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

            default: cout<<"Invalid choise"<<endl;
            break;
        }
    }while(ch!=4);
}