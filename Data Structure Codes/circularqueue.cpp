#include<iostream>
#define MAX 5
using namespace std;

int cqueue[MAX],front=-1,rear=-1;

void insert(){
    if((rear+1)%MAX==front){
        cout<<"Queue is full"<<endl;
    }else{
        int val;
        cout<<"Enter the values:"<<endl;
        cin>>val;

        if (front == -1) {  // First element insertion
            front = 0;
        }

        rear=(rear+1)%MAX;
        cqueue[rear]=val;
        
    }
}

void Delete(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty"<<endl;
    }else{ 
        cout<<"The deleted element is : "<<cqueue[front]<<endl;
        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%MAX;
        }
    }
}

void display() {
    if (front == -1 && rear == -1) {  // Change 5: Check if queue is empty
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements are: ";
    int i = front;

    // Change 6: Corrected loop structure to display all elements until rear
    while (true) {
        cout << cqueue[i] << " ";
        if (i == rear) {  // Stop after printing the last element
            break;
        }
        i = (i + 1) % MAX;  // Move to the next element circularly
    }
    cout << endl;
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

            case 2:Delete();
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