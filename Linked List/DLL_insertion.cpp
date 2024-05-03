#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
    
    //constructor
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(node* head){
    node* temp =head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length of function
int listlen(node* head){
    node* temp =head;
    int ans=0;
    while(temp!=NULL){
        ans++;
        temp=temp->next;
    }
    return ans;
}

void insertAtstart(node* &head,int d){
    node* temp=new node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;
}

void insertAtend(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtpos(node* &tail,node* &head,int d,int pos){
     node* temp=new node(d);
     
     if(pos==1){
         insertAtstart(head,d);
         return;
     }
     
     node* temp1=head;
     for(int i=1;i<pos-1;i++){
        temp1=temp1->next; 
     }
     
     //at last
     if(temp1->next==NULL){
         insertAtend(tail,d);
         return;
     }
     
     temp->next=temp1->next;
     temp1->next->prev=temp;
     temp1->next=temp;
     temp->prev=temp1;
     
}

int main(){
    node* node1 = new node(10);
    node* head=node1;
    node* tail=node1;
    print(head); 
    cout<<listlen(head)<<endl;
    
    
    insertAtstart(head,6);
    print(head);
    
    insertAtend(tail,56);
    print(head);
    
    insertAtstart(head,76);
    print(head);
    
    insertAtpos(tail,head,90,3);
    print(head);
    
    insertAtpos(tail,head,70,1);
    print(head);
    
    insertAtpos(tail,head,9,7);
    print(head);
    
    
    cout<<listlen(head)<<endl;
    return 0;
}