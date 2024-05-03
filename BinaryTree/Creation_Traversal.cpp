#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
      int data;
      node* left;
      node* right;
    
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }  
};

node* buildTree(node* root){
    int data;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new node(data);
    
    
    cout<<"Enter the data to be inserted at left of"<<data<<endl;
    root->left= buildTree(root->left);
    cout<<"Enter the data to be inserted at right of"<<data<<endl;
    root->right= buildTree(root->right);
    
    return root;
}
//BFS(breadth-first-search):
void LevelOrderTraversal(node* root){
    queue<node* >q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

//inorderTraversal:
void inorderTraversal(node* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}
//preorderTraversal:
void preorderTraversal(node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
//postorderTraversal:
void postorderTraversal(node* root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    node* root =NULL ;
    
    //creating root:
    
    root=buildTree(root);
    //for(BFS)
    LevelOrderTraversal(root);
   //Inorder:
   cout<<"Inorder Traversal is:"<<endl;
   inorderTraversal(root);
   cout<<endl;
   //Preorder:
   cout<<"Preorder Traversal is:"<<endl;
   preorderTraversal(root);
   cout<<endl;
   //Postorder:
   cout<<"Postorder Traversal is:"<<endl;
   postorderTraversal(root);
   cout<<endl;
    
    return 0;
}
