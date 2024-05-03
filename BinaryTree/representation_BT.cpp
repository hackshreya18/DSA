#include <iostream>
using namespace std;

struct Node{
    
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void print(Node* &root){
    if(root==NULL) return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main()
{
    struct Node* root=new Node(1);
    
    root->left=new Node(7);
    root->right=new Node(3);
    root->left->right=new Node(4);
    
    print(root);
    return 0;
}
