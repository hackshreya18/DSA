#include <iostream>
#include <queue>

using namespace std;

int main(){
    //max heap
    priority_queue <int> maxi;
    maxi.push(7);
    maxi.push(47);
    maxi.push(9);
    maxi.push(3);
    maxi.push(2);
    
    cout<<"Size->"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    //min heap
    priority_queue <int,vector<int>,greater<int>> mini;
    mini.push(7);
    mini.push(47);
    mini.push(9);
    mini.push(3);
    mini.push(2);
    
    cout<<"Size->"<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
}
