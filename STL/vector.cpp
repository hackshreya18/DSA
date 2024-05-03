#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    
    v.push_back(3);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    
    v.push_back(5);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    
    v.push_back(9);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size"<<v.size()<<endl;
    
    cout<<"first element and last element"<<v.front()<<" "<<v.back()<<endl;
    
    cout<<"printing element:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"after poping"<<endl;
    
    v.pop_back();
    cout<<"after poping"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    vector <int> a(5,1);

//coping the vector
    vector <int> sec(a);
    cout<<"printing element:"<<endl;
    for(int i:sec){
        cout<<i<<" ";
    }
}

