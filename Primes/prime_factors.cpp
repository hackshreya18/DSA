//find prime factors(most optimized : by spf(smallest prime factor using sieve)

#include <iostream>
using namespace std;

int N=1000000;
int spf[1000001]; //smallest prime factor=spf:
void createSpf(){
    for(int i=1;i<=N;i++){
        spf[i]=i;
    }
    
    for(int i=2;i*i<=N;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

int main()
{
    //O(n log(log n))
  createSpf();
   
   int t;
   cin>>t;
   //log(n)
   while(t--){
        int n;
    cin>>n;
    
      if(n==1 || n==0) cout<<n;
      while(n>1){
          cout<<spf[n]<<" ";
          n/=spf[n];
      }
      cout<<endl;
   }
 
}