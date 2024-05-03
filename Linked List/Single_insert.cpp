//Singly linked list(Insertion)

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
    
    InsertAtend(tail,90);
    print(head);
    
    InsertAtstart(head,20);
    print(head);
    
    InsertAtstart(head,50);
    print(head);
    
    InsertAtpos(tail,head,29,2);
    print(head);
    
    InsertAtpos(tail,head,49,7);
    print(head);
    
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    
        return 0;
    
}
