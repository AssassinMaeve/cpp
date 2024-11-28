#include<iostream>
using namespace std;

class node{         // we create a class with variable as int data and we create a pointer called node* next
    public:         // Don't forget to make this public otherwise it won't be accessible in the methods
    int data;
    node* next;     // this node points to the next node


   
    node(int val){
        data=val;       // storing the value of data in val
        next=NULL;      // setting the value of next to Null if you don't it will lead to unpredictable behavior
    }

};

                    
    void insertathead(node* &head, int val){
        node* n = new node(val);
        n->next=head;                       // this will point to the first node
        head=n;                             // we move head to n because n is now become the first node
    }
    
     // we use head reference variable here
     void insertattail(node* &head, int val){             // in this we are inserting elements in the linked list

        node* n = new node(val);                        // this is a new node named n with value val           

        if(head==NULL){             // if head points to null that means we are at the end of the 
            head=n;
            return;
        }
        
        node* temp=head;                // this is a new pointer called temp going to be used to traverse through the list
        while(temp->next!=NULL){        // Access the next node in the sequence to move through the list until it reaches null
            temp=temp->next;            
        }
        temp->next=n;
    }

    // in this method we can use head directly as well no need to make a new node named temp
    void display(node* head){                   // used to display the list 
        node* temp=head;                        // we make a new pointer and we start it from head
        while(temp!=NULL){                      //traversing through the list till null
            cout<<temp->data<<" "<<endl;        // displaying a the data in the linked list
            temp=temp->next;                    
        }
    }                       

    bool search(node* head,int key){            //searching the element in the linked list
        while(head!=NULL){
            if(head->data==key){
                return true;
            }
            head=head->next;
        }
        return false;
    }

    void deleteathead(node* & head){            //deleting if the value is head
        node* todelete=head;                    //storing head in todelete
        head=head->next;                        //pointing to head->next

        delete todelete;                        // to prevent memory leak
    }


    void deletion(node* &head, int val){        // deleting a node in a list
        node* temp = head;                      // assigning head to temp
        while(temp->next->data!=val){           // traversing to the node 
            temp=temp->next;                    // Inside the loop, temp is updated to point to the next node (temp = temp->next)
        }                                       
            node* todelete= temp->next;         //assigns todelete to point at the node that needs to be deleted (temp->next)
            temp->next=temp->next->next;        /* we adjust the next pointer of temp so that it now points
                                                to the node after todelete, effectively removing todelete from the linked list*/

            delete todelete;                    // free the memory basically deleting it
    }




int main() {
    node* head=NULL;
    int ch,val,key;

    cout<<"1. Insert from tail "<<endl;
    cout<<"2. Insert element At head "<<endl;
    cout<<"3. Display "<<endl;
    cout<<"4. Search elements "<<endl;
    cout<<"5. Delete "<<endl;
    cout<<"6. Delete at head "<<endl;
    cout<<"7. Exit "<<endl;

    do{
        cout<<"Enter ur choice"<<endl;
        cin>>ch;

        switch(ch){
            case 1: cout<<"Enter the elements in the tail: "<<endl;
            cin>>val;
            insertattail(head,val);
            break;

            case 2: cout<<"Enter the element at the head: "<<endl;
            cin>>val;
            insertathead(head,val);
            break;

            case 3: cout<<"The elements are: "<<endl;
            display(head);
            break;

            case 4: cout<<"Search ur element: "<<endl;
            cin>>key;
            if (search(head, key)) {
                    cout << "Element of "<<key<<" is present "<< endl;
                } else {
                    cout << "Element of "<<key<<" is not present " << endl;
                }
            break;


            case 5: cout<<"Delete the element in the list"<<endl;
            cin>>key;
            deletion(head,key);
            break;

            case 6: cout<<"The element is deleted at the head "<<endl;
            deleteathead(head);
            break;

            case 7: cout<<"Exiting.... "<<endl;
            break;

            default:cout<<"Invalid choice"<<endl;
            break;
        }
    }while(ch!=7);
    
    return 0;
}
