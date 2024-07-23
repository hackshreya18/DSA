#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int a){
  if(a<2)return false;
  for(int i=2;i*i<=a;i++){
    if(a%i==0)return false;
  }
  return true;
}

int solve(vector<int> arr,int in){
  int ans=0;
  int mini=INT_MAX;
  for(int i=0;i<in;i++){
    if(checkPrime(arr[i])){
      ans+=arr[i];
      mini=min(mini,arr[i]);
    }
  }

  return ans-mini;
}
int main(){
  int n=11;
  vector<int>arr={10,41,18,50,43,31,29,25,59,96,67};

  cout<<solve(arr,n);
}

