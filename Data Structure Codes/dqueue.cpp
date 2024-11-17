#include<iostream>
using namespace std;

int dqueue[5],front=-1,rear=-1,n=5;

void insertfront() {
    int in;
    if (rear == n - 1) {
        cout << "Queue is full" << endl;
        return;
    } else if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        cout << "Enter the element in the front: " << endl;
        cin >> in;
        dqueue[front] = in;
    } else {
        cout << "Enter the element in the front: " << endl;
        cin >> in;
        dqueue[--front] = in;
    }
}

void insertend(){
    int in;
    if(rear==n-1){
        cout<<"Queue is full"<<endl;
    }else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        
        cout<<"Enter the element in the end: "<<endl;
        cin>>in;
        dqueue[rear]=in;
    }else{
        
        cout<<"Enter the element in the end: "<<endl;
        cin>>in;
        rear++;
        dqueue[rear]=in;
    }
}

void deletefront(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }else if(front==rear){
        front=rear=-1;
    }else{
        cout<<"The deleted element in the front is: "<<dqueue[front]<<endl;
        front++;
    }
}

void deleterear(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }else if(front==rear){
        front=rear=-1;
    }else{
        cout<<"The deleted element in the rear is: "<<dqueue[rear]<<endl;
        rear--;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }else{
        cout<<"The elements present are"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<dqueue[i]<<" ";
        }
    }
}

int main(){
    int ch;

    cout<<"1.Insert in the front:"<<endl;
    cout<<"2.Insert in the rear:"<<endl;
    cout<<"3.Delete in the front:"<<endl;
    cout<<"4.Delete in the rear:"<<endl;
    cout<<"5.Display"<<endl;
    cout<<"6.Exit"<<endl;

    do{
        cout<<"Enter ur choice"<<endl;
        cin>>ch;

        switch(ch){
            case 1:insertfront();
            break;

            case 2:insertend();
            break;

            case 3:deletefront();
            break;

            case 4:deleterear();
            break;

            case 5:display();
            break;

            case 6:cout<<"Exiting..."<<endl;
            break;

            default:cout<<"Invalid choice"<<endl;
            break;
        }
    }while(ch!=6);
}

