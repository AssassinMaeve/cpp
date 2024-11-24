#include<iostream>
#define MAX 5
using namespace std;

int cqueue[MAX], front = -1, rear = -1;

void insert(){
    int val;
    if((rear + 1)%MAX == front){
        cout<<"The queue is full"<<endl;
    }else{
        if(front=-1){
            front=0;
        }
        cout<<"Enter the element: "<<endl;
        cin>>val;

        rear=(rear+1)%MAX;
        cqueue[rear]=val;
    }
}

void deletee(){
    if(front== -1 && rear == -1){
        cout<<"The queue is empty"<<endl;
    }else{
        if(front==rear){
            front=rear=-1;
        }else{
            cout<<"The deleted element is: "<<cqueue[front]<<endl;
            front=(front+1)%MAX;
        }
    }
}

void display(){
    if(front== -1 && rear == -1){
        cout<<"The queue is empty"<<endl;
        return;
    }else{
        cout<<"The elements are: "<<endl;
        int i=front;
        while(true){
            cout<<cqueue[i]<<endl;
            if(i==rear){
                break;
            }
            i = (i + 1)%MAX;
        }
    }
}

int main(){
    int ch;

    cout<<"1. Insert the element: "<<endl;
    cout<<"2. Delete the element: "<<endl;
    cout<<"3. Display: "<<endl;
    cout<<"4. Exit "<<endl;

    do{
        cout<<"Enter ur choice"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:insert();
            break;

            case 2:deletee();
            break;

            case 3:display();
            break;

            case 4:cout<<"Exiting.....";
            break;
        
        default:cout<<"Invalid option...";
            break;
        }
    }while(ch!=4);
}