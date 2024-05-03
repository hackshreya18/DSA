#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    //constructor
    node(int d){
        this->data=d;
        this->next=NULL;  
    }
    //destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory gets free for data:"<<value<<endl;
    }
};

void insertnode(node* &tail,int element,int d){
    //assuming  the elemnet is there in the list
    
    //empty list
    if(tail==NULL){
        node* temp= new node(d);
        tail=temp;
        temp->next=temp;
    }
    //non-empty
    else{
        node* curr = tail;
        //element present in the list
        while(curr->data!=element){
            curr=curr->next;
        }
        
        node* temp= new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deletenode(node* &tail,int value){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        node* prev=tail;
        node*curr=prev->next;
        
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        
        //1 node l.l
        prev->next=curr->next;
        
        if(curr==prev){
            tail=NULL;
        }
        
        //>=2 node l.l
        else if(tail==curr){
            tail=prev;
        }
        
        curr->next=NULL;
        delete curr;
    }
}

void print(node* &tail){
    node*temp =tail;
    
    if(tail==NULL){
        cout<<"Empty list"<<endl;
        return;
    }
    
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main(){
    node* tail=NULL;
    
    insertnode(tail,5,10);
    print(tail);
    
    insertnode(tail,10,2);
    print(tail);
    
    insertnode(tail,2,7);
    print(tail);
    
    insertnode(tail,2,98);
    print(tail);
    
    insertnode(tail,10,6);
    print(tail);
    
    insertnode(tail,6,100);
    print(tail);
    
    insertnode(tail,98,190);
    print(tail);
    
    deletenode(tail,98);
    print(tail);
    
    deletenode(tail,2);
    print(tail);
    
    deletenode(tail,7);
    print(tail);
    
    deletenode(tail,100);
    print(tail);
    
    deletenode(tail,10);
    print(tail);
    
    deletenode(tail,6);
    print(tail);
    
    deletenode(tail,190);
    print(tail);

    return 0;
}
