#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> d;
    
    cout<<"size:"<<d.size()<<endl;
    
    d.push_back(3);
    cout<<"size:"<<d.size()<<endl;
    
    d.push_front(7);
    cout<<"size:"<<d.size()<<endl;
    
    d.push_back(9);
    cout<<"size"<<d.size()<<endl;
    
    d.push_back(59);
    cout<<"size"<<d.size()<<endl;
    d.push_front(9);
    cout<<"size"<<d.size()<<endl;
    d.push_back(3);
    cout<<"size"<<d.size()<<endl;
    cout<<"first element and last element"<<d.front()<<" "<<d.back()<<endl;
    
    cout<<"printing element:"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"size"<<d.size()<<endl;
    
    d.pop_back();
    cout<<"after poping"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"size"<<d.size()<<endl;
    d.pop_front();
    cout<<"after poping"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"size"<<d.size()<<endl;
    
   deque <int> a(5,1);

//coping the vector
    deque <int> sec(a);
    cout<<"printing element:"<<endl;
    for(int i:sec){
        cout<<i<<" ";
    }
    cout<<endl;
    //to delete
    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"size: "<<d.size()<<endl;
    return 0;
}


