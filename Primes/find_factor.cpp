//Find factor for condition: a.b.c==n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a=1,b=1,c=1;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            break;
        }
    }
    
    n=n/a;
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && i!=a){
            b=i;
            if((n/i)!=i &&( n/i)!=a ){
                c=n/i;
                break;
            }
        }
    }
    
    if(a!=b && b!=c && c!=1){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}

