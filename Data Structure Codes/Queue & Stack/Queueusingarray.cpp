#include<iostream>
using namespace std;

int queue[100],n=100,front=-1,rear=-1;

void Insert(){
    int val;
    if(rear==n-1){
        cout<<"Queue is overflow"<<endl;
    }else{
        if(front==-1)
        front=0;
        cout<<"Insert the element in queue"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}

void Delete(){
    int q;

    if(front==-1 || front > rear ){
        cout<<"Queue is underflow"<<endl;
        return;
    }else{
        q=queue[front];
        cout<<"Element deleted from the queue is: "<<q<<endl;
        front++;
    }
}

void display(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"Elements are: "<<endl;
        for(int i=front ; i <= rear; i++){
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
            case 1:Insert();
            break;

            case 2:Delete();
            break;

            case 3:display();
            break;

            case 4:cout<<"exit"<<endl;
            break;

            default:cout<<"Invalid choice"<<endl;
        }
        
    }while (ch!=4);     
        
}