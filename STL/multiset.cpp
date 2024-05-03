#include <iostream>
#include <set>

using namespace std;
int main(){
    //ordered set are formed:
  multiset<int> s;
  s.insert(9);
  s.insert(8);
  s.insert(94);
  s.insert(0);
  s.insert(1);
  s.insert(9);
  s.insert(9);
  s.insert(9);
 for(auto i:s){
     cout<<i<<" ";
 }cout<<endl;
  multiset <int> :: iterator p=s.begin();
  p++;
  s.erase(p);
  for(auto i:s){
     cout<<i<<" ";
 }cout<<endl;
 cout<<"number 9 is present :"<<s.count(9)<<endl;
 set <int> :: iterator l=s.find(9);
 for(auto j=l;j!=s.end();j++){
     cout<<*j<<" ";
 }cout<<endl;
}

