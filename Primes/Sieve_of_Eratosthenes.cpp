#include <iostream>
using namespace std;

const int N=1000000;
bool sieve[N+1];


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
    
}

int main()
{
    // Time Complexity:O(nlog(logn))
   
       createSieve();
       int t;
       cin>>t;
       
       while(t--){
           int n;
           cin>>n;
           
           if(sieve[n]==true){
               cout<<"Yes"<<endl;
           }
           else{
               cout<<"No"<<endl;
           }
       }

    return 0;
}
