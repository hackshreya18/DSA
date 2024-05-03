#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int num=i;
        for(int j=0;j<2*i+1;j++){
            
            if(j==0 || j==2*i){
                cout<<"*"<<" ";
            }
            else{
                if(j>i){
                    cout<<--num<<" ";
                }
                else{
                    cout<<j<<" ";
                }
            }
           
        }
        cout<<endl;
    }
    
    for(int i=n-2;i>=0;i--){
        int num=i;
        for(int j=0;j<2*i+1;j++){
            
            if(j==0 || j==2*i){
                cout<<"*"<<" ";
            }
            else{
                if(j>i){
                    cout<<--num<<" ";
                }
                else{
                cout<<j<<" ";
                }
            }
        }
        cout<<endl;
    }
}
