#include <iostream>
#include <list>

using namespace std;
int main(){
    list <int> l;
    cout<<"size "<<l.size()<<endl;
    
    l.push_back(7);
    l.push_front(8);
    l.push_back(47);
    l.push_front(9);
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //to remove at required
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    l.pop_back();
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    //other way of initialization
    list <int> l2(6,2);
    for(int i:l2){
        cout<<i<<" ";
    }
}
