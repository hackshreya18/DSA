// k queue in an array

#include <iostream>
using namespace std;

class kQueue{
    
    public:
      int n;
      int k;
      int *arr;
      int *next;
      int freespot;
      int *rear;
      int *front;
      
    public:
      kQueue(int n,int k){
         this->n= n;
         this->k= k;
         
         front=new int[k];
         rear=new int [k];
         next=new int[n];
         arr=new int[n];
         
         for(int i=0;i<k;i++){
             rear[i]=-1;
             front[i]=-1;
         }
         
         for(int i=0;i<n-1;i++){
             next[i]=i+1;
         }
         next[n-1]= -1;
         freespot=0;
      }
      
      void enqueue(int x,int qn){
          if(freespot==-1){
              cout<<"Overflow"<<endl;
          }
          
          int index=freespot;
          freespot=next[index];
          
          if(front[qn-1]==-1){
              front[qn-1]=index;
          }
          else{
              next[rear[qn-1]]=index;
          }

          next[index]=-1;
          rear[qn-1]=index;
          arr[index]=x;
      }
      
      int dequeue(int qn){
          if(front[qn-1]==-1){
              cout<<"Underflow"<<endl;
          }
          
          int index=front[qn-1];
          front[qn-1]=next[index];
          
          next[index]=freespot;
          freespot=index;
          
          return arr[index];
      }
};

int main()
{
   kQueue q(8,3);
   q.enqueue(10,1);
   q.enqueue(15,1);
   q.enqueue(20,2);
   q.enqueue(60,2);
   q.enqueue(40,1);
   cout<<q.dequeue(1)<<endl;
   cout<<q.dequeue(2)<<endl;
   cout<<q.dequeue(1)<<endl;
   cout<<q.dequeue(1)<<endl;
   
   
    return 0;
}