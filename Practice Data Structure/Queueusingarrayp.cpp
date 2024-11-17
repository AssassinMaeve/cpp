#include<iostream>
using namespace std;

int queue[100],front=-1,rear=-1,n=100;

void insert(){
    int val;
    if(rear==n-1){
        cout<<"Queue Overflow"<<endl;
        }else{
            if(front==-1)
            front=0;
            cout<<"Enter the values to insert: "<<endl;
            cin>>val;
            queue[++rear]=val;
    }
}

void Delete(){
    
    if(front==-1 || front>rear){
        cout<<"Queue is underflow"<<endl;
        return;
    }else{
        {
            
            cout<<"The element to be deleted is: "<<queue[front]<<endl;
            front++;
            
        }
    }
}

void display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"The elements present are: "<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
}

int main(){
    int ch;

    cout<<"1. Insert elements"<<endl;
    cout<<"2. Delete elements"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;

    do{
        cout<<"Enter the choice"<<endl;
        cin>>ch;

        switch(ch){
            case 1:insert();
            break;

            case 2:Delete();
            break;

            case 3:display();
            break;

            case 4:cout<<"Exiting...."<<endl;
            break;

            default: cout<<"Invalid input"<<endl;
        }
    }while(ch!=4);
}