#include<iostream>
using namespace std;

int dqueue[5], front = -1, rear = -1, n = 5;

void insertfront(){
    int val;
    if(front==0 && rear== n-1 ){
        cout<<"The queue is empty"<<endl;
    }else if(front == -1 && rear == -1){
        front=rear=0;
        cout<<"Enter the element: "<<endl;
        cin>>val;
        dqueue[front] = val;
    }else if(front=0){
            cout<<"Cannot insert more elements in the front"<<endl;
        }else{
            cout<<"Enter the element: "<<endl;
            cin>>val;
            dqueue[--front] = val;
        }
    }

void insertrear(){
    int val;
    if(rear== n-1 ){
        cout<<"The queue is empty"<<endl;
    }else if(front == -1 && rear == -1){
        front=rear=0;
        cout<<"Enter the element: "<<endl;
        cin>>val;
        dqueue[rear] = val;
    }else{
            cout<<"Enter the element: "<<endl;
            cin>>val;
            dqueue[++rear] = val;
        }
    }

void deletefront(){
    if(front == -1 && rear == -1){
        cout<<"The queue is empty"<<endl;
    }else if(front==rear){
        front=rear=-1;
        cout<<"The deleted element is: "<<dqueue[front]<<endl;
    }else{
        cout<<"The deleted element is: "<<dqueue[front]<<endl;
        front++;
    }
}

void deleterear(){
    if(front == -1 && rear == -1){
        cout<<"The queue is empty"<<endl;
    }else if(front==rear){
        front=rear=-1;
        cout<<"The deleted element is: "<<dqueue[rear]<<endl;
    }else{
        cout<<"The deleted element is: "<<dqueue[rear]<<endl;
        rear--;
    }
}

void display(){
    if(front == -1 && rear == -1){
        cout<<"The queue is empty"<<endl;
    }else{
        cout<<"The elements are: "<<endl;
        for(int i=front;i<=rear;i++){
            cout<<dqueue[i]<<endl;
        }
    }
}

int main() {
    int ch;
    cout << "1. Insert at the front" << endl;
    cout << "2. Insert at the rear" << endl;
    cout << "3. Delete from the front" << endl;
    cout << "4. Delete from the rear" << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: insertfront(); break;
            case 2: insertrear(); break;
            case 3: deletefront(); break;
            case 4: deleterear(); break;
            case 5: display(); break;
            case 6: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice" << endl; break;
        }
    } while (ch != 6);

    return 0;
}
