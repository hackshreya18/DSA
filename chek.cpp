#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> Availability(int N,vector<int> L,vector<int> R){
    int i=0;
    vector<vector<int>>out;
    vector<int>p;
    p.push_back(0);
    p.push_back(L[i]);
    out.push_back(p);
    i++;

    while(i<N){
        vector<int>temp;
        if(L[i]!=R[i-1]){
            temp.push_back(R[i-1]);
            temp.push_back(L[i]);  
            out.push_back(temp);  
            i++; 
        }
       else{
        i++;
       }
        
    }

    if(R[i-1]!=1000000000){
        vector<int>p;
        p.push_back(R[i-1]);
        p.push_back(1000000000);
        out.push_back(p);
    }

    return out;
}

int main(){
    vector<int>L={1,4,9,23};
    vector<int>R={3,9,22,100000000};
    int N=4;
    vector<vector<int>>out=Availability(N,L,R);

    for(int i=0;i<out.size();i++){
        for(int j=0;j<out[0].size();j++){
            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}