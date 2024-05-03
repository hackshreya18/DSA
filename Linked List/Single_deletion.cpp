#include <iostream>
using namespace std;

class Node{
   
   public:
   int data;
   Node* next;
    
    //Construxtor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    //Destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data:"<<value<<endl;
    }
    
};

void InsertAtstart(Node* &head,int data){
    //create new node
    Node* temp=new Node(data);
    
    temp->next=head;
    head=temp;
}

// void InsertAtend(Node* &head,int data){
//     //create new node
//     Node* temp1=new Node(data);
    
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//   temp->next=temp1;
   
   
// }

void InsertAtend(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next; 
}



void print(Node* &head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// void InsertAtpos(Node* &head,int d,int pos){
//     Node *newnode=new Node(d);
    
//     Node* temp=head;
    
//     for(int i=1;i<pos-1;i++){
//         temp=temp->next;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
// }

void InsertAtpos(Node* &tail,Node* &head,int d,int pos){
    Node *newnode=new Node(d);
    //insert at start
    if(pos==1){
        InsertAtstart(head,d);
        return;
    }
    Node* temp=head;
    
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    //insert at last
    if(temp->next==NULL){
        InsertAtend(tail,d);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void deletion(Node* &head,int pos){
    
    //deletion at start
    if(pos==1){
        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //delete any middle node or last node
    else{
        Node* curr=head;
        Node* prev=NULL;
    
    for(int i=1;i<pos;i++){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    
    curr->next=NULL;
    delete curr;
    }
}

int main(){
    
    //forming new node
    Node* node1=new Node(10);
    
    cout<<node1->next<<endl;;
    cout<<node1->data<<endl;
    
    Node* head=node1; 
    Node* tail=node1; 
    
    print(head);
    
    InsertAtend(tail,70);
    print(head);
    
    InsertAtstart(head,20);
    print(head);
    
    InsertAtpos(tail,head,29,2);
    print(head);
    
    InsertAtpos(tail,head,49,5);
    print(head);
    
    deletion(head,3);
    print(head);
    
    deletion(head,1);
    print(head);
    
    deletion(head,2);
    print(head);
    
    
    
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    
        return 0;
    
}