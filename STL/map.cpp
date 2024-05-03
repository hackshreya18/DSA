#include <iostream>
#include <map>

using namespace std;

int main(){
    map <int,string> m;
    m[3]="shreya";
    m.insert({2,"xa"});
    m[36]="kdsc";
    m.insert({44,"kjk"});
    m.insert({94,"bhtg"});
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"size:"<<m.size()<<endl;
    cout<<"Find 4:"<<m.count(4)<<endl;
    m.erase(36);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"size:"<<m.size()<<endl;
    map <int,string> :: iterator it=m.find(3);//or auto it=m.find(3);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}
