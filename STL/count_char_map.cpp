// Mapping(counting frequency of char. in a string)

#include <bits/stdc++.h>
using namespace std;

void freq(string s){
    map<char,int> m;
    
    for(int i=0;i<s.length();i++){
        if(m.find(s[i])==m.end()){
            m.insert(make_pair(s[i],1));
        }
        else{
            m[s[i]]++;
        }
    }
    
    for(auto& it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    string s;
    cin>>s;
    
    freq(s);
    return 0;
}
