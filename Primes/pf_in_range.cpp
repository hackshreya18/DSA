// find for how many numbers k is a minimum prime factor in range(1 to 10^6)

#include <bits/stdc++.h>
using namespace std;

int N=1000000;
int sieve[1000001];

void createSieve(){
    for(int i=2;i<=N;i++){
        sieve[i]=1;
    }    
        
    for(int i=2;i*i<=N;i++){
            if(sieve[i]==1){
                for(int j=i*i;j<=N;j+=i){
                    if(sieve[j]==1){
                        sieve[i]++;
                        sieve[j]=0;
                    }
                }
            }
        }
    
}

int main()
{
    createSieve();
       //find for how many numbers k is a minimum prime factor:
       
           int k;
           cin>>k;
           
           cout<<sieve[k]<<endl;
       

}