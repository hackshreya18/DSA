#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <string> s;
    s.push("hey");
    s.push("bye");
    s.push("low");
    s.push("lw");
    s.push("lowiuiu");
    
    cout<<"top element:"<<s.top()<<endl;
    
    s.pop();
    cout<<"top element:"<<s.top()<<endl;
    cout<<"All elements:"<<endl;
    int s1=s.size();
    for(int i=0;i<s1;i++){
        cout<<s.top()<<endl;
        cout<<s.size()<<endl;
        s.pop();
    }
    cout<<"empty or not:"<<s.empty();
    return 0;
}

