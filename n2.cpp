#include<bits/stdc++.h>
using namespace std;

string solve(string input1, string input2, int input3, int input4){
    string s,l;
    string ans="";
    if(input1.length()<input2.length()){
        s=input1;
        l=input2;
    }
    else if(input1.length()>input2.length()){
        s=input2;
        l=input1;
    }
    else{
        if(input1 < input2){
           s=input1;
           l=input2; 
        }
        else{
            s=input2;
            l=input1;
        }
    }

    ans+=s[0];
    ans+=l;

    string p=to_string(input3);
    ans+=p[input4-1];
    ans+=p[p.length()-input4];

    string result="";
    for (char c : ans) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }

    return result;
}

int main(){
   
    string a="Manoj",b="Kumar";
    int c=561327;
    int n=2;
    
    cout<< solve(a,b,c,n)<<endl;
   
}