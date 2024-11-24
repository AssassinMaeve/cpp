#include<iostream>
using namespace std;

int queue[5],front=-1,rear=-1,n=5;

void insert(){
    int val;
    if(rear==n-1){
        cout<<"The queue is full"<<endl;
    }else{
        if(front==-1)
            front=0;
            cout<<"Enter the elements: "<<endl;
            cin>>val;
            
            queue[++rear]=val;
            
        
    }
}

void deletee(){
    if(front==-1 || front>rear){
        cout<<"The queue is empty"<<endl;
        return;
    }else{
        cout<<"The deleted elements is: "<<queue[front]<<endl;
        front++;
    }
}

void display(){
    if(front==-1){
    cout<<"The queue is empty"<<endl;
    }else{
        cout<<"The element in the queue is: "<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
}

int main(){
    int ch;

    cout<<"1. Insert the elements: "<<endl;
    cout<<"2. delete the elements: "<<endl;
    cout<<"3. display the elements: "<<endl;
    cout<<"4. exit: "<<endl;

    do{
        cout<<"enter ur choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1:insert();
            break;

            case 2:deletee();
            break;

            case 3:display();
            break;

            case 4:cout<<"exit"<<endl;
            break;

            default:cout<<"Invalid choice"<<endl;
        }
        
    }while (ch!=4);
        return 0;
           
        
}