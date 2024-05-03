#include <bits/stdc++.h>
using namespace std;

int N=86028121;
bool sieve[86028122];
vector<int> ans;

void createSieve(){
    for(int i=2;i<=N;i++){
        sieve[i]=true;
    }    
        
    for(int i=2;i*i<=N;i++){
            if(sieve[i]==true){
                for(int j=i*i;j<=N;j+=i){
                    sieve[j]=false;
                }
            }
        }
        
    // int limit=5*1000000;
    // int cnt=0;
    // int size=0;
    //  for(int i=0;;i++){
    //      if(sieve[i]){
             
    //          cnt++;
    //      }
    //      if(cnt==limit){
    //          size=i;
    //          break;
    //      }
    //  }
     
    //  cout<<size<<endl;
     for(int i=2;i<=N;i++){
           if(sieve[i]==true){
               ans.push_back(i);
           }
       }
}

int main()
{
    // Time Complexity:O(nlog(logn))
    createSieve();
       //find k-th prime;
       
           int k;
           cin>>k;
           
           cout<<ans[k-1]<<endl;
       

}